#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1764012850;
unsigned int var_7 = 3475074263U;
unsigned int var_8 = 4112597422U;
int zero = 0;
unsigned int var_14 = 1529177939U;
unsigned short var_15 = (unsigned short)22325;
unsigned char var_16 = (unsigned char)29;
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
