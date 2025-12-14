#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4118129119U;
unsigned short var_3 = (unsigned short)24975;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-20997;
short var_10 = (short)-25995;
unsigned long long int var_11 = 18250028444802400495ULL;
long long int var_12 = -2157661927555862654LL;
int zero = 0;
long long int var_13 = 208857561182090585LL;
signed char var_14 = (signed char)-107;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
