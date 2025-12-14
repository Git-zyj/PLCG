#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)6887;
unsigned short var_4 = (unsigned short)19711;
unsigned char var_5 = (unsigned char)243;
signed char var_8 = (signed char)-103;
unsigned long long int var_9 = 2827131272179129524ULL;
signed char var_13 = (signed char)117;
int zero = 0;
unsigned char var_14 = (unsigned char)179;
unsigned long long int var_15 = 13049812202147462596ULL;
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
