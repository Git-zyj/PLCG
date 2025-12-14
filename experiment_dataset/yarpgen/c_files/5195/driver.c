#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-83;
unsigned short var_16 = (unsigned short)36460;
int zero = 0;
signed char var_17 = (signed char)49;
unsigned char var_18 = (unsigned char)161;
signed char var_19 = (signed char)102;
unsigned char var_20 = (unsigned char)186;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
