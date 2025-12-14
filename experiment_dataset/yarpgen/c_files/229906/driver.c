#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-52;
signed char var_3 = (signed char)-23;
int var_5 = -1377326779;
int var_7 = -1438866640;
int var_8 = 740386370;
unsigned char var_12 = (unsigned char)226;
int zero = 0;
int var_14 = 186325811;
signed char var_15 = (signed char)69;
unsigned char var_16 = (unsigned char)66;
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
