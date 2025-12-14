#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)18168;
unsigned long long int var_6 = 13538741859471793053ULL;
unsigned short var_8 = (unsigned short)49321;
int zero = 0;
unsigned char var_18 = (unsigned char)107;
unsigned char var_19 = (unsigned char)116;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
