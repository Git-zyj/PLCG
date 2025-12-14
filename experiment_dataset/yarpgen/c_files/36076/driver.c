#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)165;
unsigned long long int var_5 = 11404942101135055186ULL;
unsigned short var_13 = (unsigned short)5329;
int zero = 0;
unsigned char var_16 = (unsigned char)60;
unsigned int var_17 = 1161276275U;
signed char var_18 = (signed char)29;
long long int var_19 = -8082453214662641771LL;
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
