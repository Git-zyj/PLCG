#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3927180083U;
int var_1 = -1307817620;
_Bool var_2 = (_Bool)1;
long long int var_4 = -6436736207642088603LL;
unsigned int var_5 = 3480072202U;
unsigned long long int var_6 = 17239408128629007728ULL;
long long int var_9 = -5937615111688406795LL;
long long int var_10 = 7408369691998800640LL;
signed char var_11 = (signed char)48;
unsigned short var_12 = (unsigned short)33533;
int zero = 0;
signed char var_14 = (signed char)-42;
signed char var_15 = (signed char)68;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-70;
short var_18 = (short)7102;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
