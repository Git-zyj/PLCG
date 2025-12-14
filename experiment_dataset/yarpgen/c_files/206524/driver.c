#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)195;
signed char var_7 = (signed char)22;
unsigned long long int var_8 = 17089881281904154857ULL;
unsigned char var_11 = (unsigned char)114;
signed char var_16 = (signed char)-15;
unsigned char var_18 = (unsigned char)207;
int zero = 0;
signed char var_19 = (signed char)-13;
unsigned char var_20 = (unsigned char)204;
void init() {
}

void checksum() {
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
