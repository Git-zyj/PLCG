#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1371472687U;
long long int var_4 = -1758283983530461715LL;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)216;
unsigned char var_14 = (unsigned char)108;
int zero = 0;
short var_18 = (short)-29057;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 7071041218517173971ULL;
unsigned char var_21 = (unsigned char)105;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
