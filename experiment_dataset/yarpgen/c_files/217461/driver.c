#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -977665074;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-32;
unsigned long long int var_3 = 483133442250446728ULL;
long long int var_8 = 8856129617565912981LL;
unsigned int var_10 = 1646317577U;
unsigned short var_11 = (unsigned short)38030;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 10204538320732394651ULL;
unsigned long long int var_15 = 12300532742655407870ULL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
