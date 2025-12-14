#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)160;
unsigned char var_11 = (unsigned char)22;
unsigned long long int var_12 = 1862210963377776955ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)26367;
unsigned int var_14 = 341618814U;
signed char var_15 = (signed char)69;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
