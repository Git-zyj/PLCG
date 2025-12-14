#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-13649;
unsigned long long int var_4 = 13225651635543251251ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 3780737330231294227ULL;
unsigned int var_9 = 1122830214U;
unsigned char var_10 = (unsigned char)252;
int zero = 0;
short var_13 = (short)-24658;
unsigned int var_14 = 1652514212U;
unsigned int var_15 = 510276761U;
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
