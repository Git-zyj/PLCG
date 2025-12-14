#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)166;
long long int var_5 = -7441005200606939341LL;
long long int var_6 = -684248373713176248LL;
unsigned int var_9 = 2585628526U;
unsigned short var_10 = (unsigned short)24077;
unsigned long long int var_15 = 10071457028859207078ULL;
long long int var_16 = 1390902924419059472LL;
int zero = 0;
short var_19 = (short)29997;
unsigned int var_20 = 4225330870U;
long long int var_21 = 4745434129260622211LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
