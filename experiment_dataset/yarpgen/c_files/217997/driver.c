#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26771;
unsigned int var_3 = 2122850658U;
unsigned int var_5 = 1753409736U;
int var_6 = -1229427535;
unsigned int var_7 = 897166585U;
unsigned short var_8 = (unsigned short)9510;
long long int var_9 = -4944364401187045915LL;
long long int var_10 = -4108368203832005701LL;
int zero = 0;
unsigned long long int var_12 = 16895261563723135680ULL;
signed char var_13 = (signed char)116;
unsigned int var_14 = 4137783195U;
signed char var_15 = (signed char)-58;
void init() {
}

void checksum() {
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
