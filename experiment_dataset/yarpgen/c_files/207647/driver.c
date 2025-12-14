#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-24368;
unsigned long long int var_4 = 8701557826974052611ULL;
short var_5 = (short)940;
unsigned char var_7 = (unsigned char)75;
unsigned char var_10 = (unsigned char)238;
short var_12 = (short)-20138;
unsigned char var_13 = (unsigned char)134;
int zero = 0;
long long int var_14 = 8942189077100991609LL;
signed char var_15 = (signed char)89;
signed char var_16 = (signed char)61;
unsigned long long int var_17 = 900491673897871864ULL;
signed char var_18 = (signed char)-53;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
