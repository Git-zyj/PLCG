#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)47618;
unsigned short var_3 = (unsigned short)59461;
unsigned long long int var_8 = 17855152370200103182ULL;
int var_10 = 10175485;
unsigned short var_11 = (unsigned short)11278;
int zero = 0;
unsigned short var_13 = (unsigned short)4822;
short var_14 = (short)24501;
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
