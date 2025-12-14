#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 371604905;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-15;
unsigned long long int var_9 = 1315041656562155492ULL;
short var_10 = (short)-14162;
unsigned long long int var_11 = 5758944474600910976ULL;
int zero = 0;
long long int var_12 = 8428846554248048770LL;
unsigned long long int var_13 = 11588058179515127985ULL;
int var_14 = -1634459945;
unsigned char var_15 = (unsigned char)137;
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
