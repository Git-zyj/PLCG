#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-100;
short var_5 = (short)-25903;
unsigned long long int var_6 = 15467424024042224958ULL;
short var_9 = (short)19546;
int zero = 0;
unsigned int var_10 = 3115272922U;
unsigned short var_11 = (unsigned short)35616;
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
