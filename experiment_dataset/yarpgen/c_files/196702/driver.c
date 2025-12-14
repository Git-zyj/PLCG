#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1678614793;
int var_5 = -1252802913;
signed char var_6 = (signed char)117;
signed char var_7 = (signed char)52;
int zero = 0;
unsigned short var_13 = (unsigned short)5839;
unsigned char var_14 = (unsigned char)26;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
