#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1133370173;
long long int var_4 = 863140143835394537LL;
int var_6 = -940751067;
int var_13 = 1332982110;
signed char var_16 = (signed char)-93;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 1050686368U;
long long int var_19 = -2171015793081439113LL;
int var_20 = -334721244;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
