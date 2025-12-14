#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)12131;
unsigned long long int var_9 = 1746515867861124893ULL;
unsigned short var_16 = (unsigned short)8078;
int var_19 = -2005619057;
int zero = 0;
unsigned char var_20 = (unsigned char)246;
unsigned short var_21 = (unsigned short)23;
void init() {
}

void checksum() {
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
