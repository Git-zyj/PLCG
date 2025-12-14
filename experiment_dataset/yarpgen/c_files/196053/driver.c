#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)11892;
signed char var_8 = (signed char)76;
unsigned short var_9 = (unsigned short)46875;
signed char var_15 = (signed char)-126;
int zero = 0;
unsigned short var_18 = (unsigned short)11136;
unsigned long long int var_19 = 7749563819603315604ULL;
unsigned char var_20 = (unsigned char)40;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
