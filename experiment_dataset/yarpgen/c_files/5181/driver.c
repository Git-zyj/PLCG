#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4679393868460915492ULL;
unsigned long long int var_2 = 13210041602534924834ULL;
int var_3 = -709926206;
unsigned long long int var_4 = 12877751962409429160ULL;
short var_6 = (short)-24067;
unsigned long long int var_7 = 6087467875744350148ULL;
int zero = 0;
short var_10 = (short)5574;
int var_11 = -2043784864;
short var_12 = (short)6773;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
