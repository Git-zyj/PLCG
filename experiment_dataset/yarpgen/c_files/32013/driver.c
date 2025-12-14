#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -271580013;
unsigned int var_3 = 2018354329U;
int var_7 = 1751889261;
unsigned int var_8 = 1327619664U;
long long int var_9 = -677055743449249870LL;
int zero = 0;
unsigned long long int var_11 = 890960559216363542ULL;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
long long int var_14 = -6699605344606407005LL;
unsigned short var_15 = (unsigned short)65258;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
