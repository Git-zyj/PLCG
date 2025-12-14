#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1025445260U;
unsigned short var_1 = (unsigned short)39824;
signed char var_3 = (signed char)-110;
_Bool var_6 = (_Bool)0;
long long int var_7 = 8672271519619102218LL;
unsigned char var_8 = (unsigned char)184;
int zero = 0;
int var_11 = -1929586311;
unsigned long long int var_12 = 9256726521589708303ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
