#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14193992589545672219ULL;
int var_8 = -1125531602;
short var_9 = (short)11427;
unsigned short var_11 = (unsigned short)40941;
unsigned int var_13 = 4115349074U;
int zero = 0;
unsigned long long int var_20 = 5887844535169295912ULL;
unsigned long long int var_21 = 13339286761433148230ULL;
unsigned long long int var_22 = 18257308024362842586ULL;
unsigned int var_23 = 472982367U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
