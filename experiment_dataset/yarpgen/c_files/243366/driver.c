#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)49380;
int var_3 = 971967117;
unsigned int var_4 = 2912161979U;
unsigned int var_5 = 838864913U;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 1889634331U;
signed char var_9 = (signed char)43;
int zero = 0;
unsigned int var_10 = 4735231U;
unsigned short var_11 = (unsigned short)8662;
unsigned long long int var_12 = 17273750327203574404ULL;
unsigned int var_13 = 3742213564U;
short var_14 = (short)27903;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
