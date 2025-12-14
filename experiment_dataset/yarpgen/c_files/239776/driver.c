#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5064585816952522279LL;
unsigned long long int var_6 = 7640834743704104855ULL;
unsigned short var_8 = (unsigned short)26551;
int var_9 = 1432224181;
unsigned short var_12 = (unsigned short)4240;
signed char var_13 = (signed char)-76;
int zero = 0;
unsigned long long int var_14 = 11197705419171200643ULL;
unsigned char var_15 = (unsigned char)154;
signed char var_16 = (signed char)125;
unsigned long long int var_17 = 4185159240745340291ULL;
signed char var_18 = (signed char)-22;
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
