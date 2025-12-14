#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22987;
short var_3 = (short)-20342;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)-106;
unsigned long long int var_7 = 1963335671849019156ULL;
signed char var_8 = (signed char)9;
unsigned long long int var_9 = 12234151148834720375ULL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 1066690541510706154ULL;
int zero = 0;
unsigned long long int var_13 = 5064675814504868173ULL;
short var_14 = (short)5606;
unsigned long long int var_15 = 920874859497584225ULL;
unsigned long long int var_16 = 11991610432586137200ULL;
short var_17 = (short)12394;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
