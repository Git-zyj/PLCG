#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)113;
unsigned char var_7 = (unsigned char)45;
unsigned int var_9 = 1654113457U;
int var_13 = -1803711958;
unsigned long long int var_15 = 12058147293193167818ULL;
short var_17 = (short)-19162;
unsigned long long int var_18 = 2675089913041777900ULL;
int zero = 0;
unsigned long long int var_20 = 12656898339877753666ULL;
long long int var_21 = -4069442684367615677LL;
unsigned int var_22 = 19446132U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
