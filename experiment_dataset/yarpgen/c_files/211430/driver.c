#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4627836304042729115ULL;
unsigned char var_3 = (unsigned char)155;
unsigned int var_5 = 1931409497U;
unsigned short var_7 = (unsigned short)29608;
unsigned char var_8 = (unsigned char)242;
signed char var_9 = (signed char)-106;
int zero = 0;
unsigned short var_10 = (unsigned short)28441;
unsigned short var_11 = (unsigned short)32131;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
