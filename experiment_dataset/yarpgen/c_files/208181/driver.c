#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)5834;
unsigned int var_4 = 615597037U;
long long int var_10 = 4315411941551530824LL;
short var_11 = (short)22311;
unsigned long long int var_12 = 2525304764540770245ULL;
int var_13 = -1162780492;
int zero = 0;
signed char var_16 = (signed char)9;
signed char var_17 = (signed char)-26;
unsigned short var_18 = (unsigned short)34916;
unsigned short var_19 = (unsigned short)48481;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
