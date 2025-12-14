#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-84;
unsigned int var_9 = 278008577U;
long long int var_11 = 7559155577966475494LL;
int var_12 = 47729674;
long long int var_14 = 3182696502740196200LL;
unsigned long long int var_15 = 10835757081737786721ULL;
unsigned long long int var_16 = 14864156531058344154ULL;
int zero = 0;
long long int var_17 = -3516213470635279186LL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
