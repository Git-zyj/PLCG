#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)51257;
unsigned short var_6 = (unsigned short)19740;
int var_7 = -595539688;
unsigned int var_16 = 3865752005U;
int zero = 0;
unsigned short var_17 = (unsigned short)56284;
unsigned long long int var_18 = 9806746535531132234ULL;
unsigned char var_19 = (unsigned char)83;
void init() {
}

void checksum() {
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
