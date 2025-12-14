#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14087718024482316568ULL;
unsigned char var_1 = (unsigned char)168;
unsigned int var_3 = 1889530532U;
unsigned int var_5 = 1261776442U;
unsigned char var_6 = (unsigned char)139;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 5186210291491275064ULL;
int zero = 0;
signed char var_17 = (signed char)-119;
signed char var_18 = (signed char)-53;
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
