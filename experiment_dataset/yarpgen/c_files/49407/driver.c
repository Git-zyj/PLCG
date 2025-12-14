#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13812956245173597414ULL;
short var_1 = (short)10482;
signed char var_2 = (signed char)71;
signed char var_4 = (signed char)-12;
int zero = 0;
unsigned int var_10 = 4084578225U;
unsigned short var_11 = (unsigned short)984;
unsigned short var_12 = (unsigned short)22643;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
