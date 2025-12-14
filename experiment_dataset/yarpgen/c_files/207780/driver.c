#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13253;
unsigned short var_1 = (unsigned short)60573;
int var_13 = -615728524;
int zero = 0;
unsigned char var_14 = (unsigned char)227;
long long int var_15 = -3115976734819974747LL;
unsigned short var_16 = (unsigned short)52395;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
