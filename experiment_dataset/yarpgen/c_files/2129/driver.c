#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-14363;
unsigned long long int var_8 = 6472352117007361787ULL;
unsigned short var_11 = (unsigned short)64712;
int zero = 0;
unsigned char var_14 = (unsigned char)106;
signed char var_15 = (signed char)-46;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
