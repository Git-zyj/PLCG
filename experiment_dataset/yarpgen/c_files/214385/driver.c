#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)47732;
unsigned long long int var_5 = 7988809849876600700ULL;
signed char var_6 = (signed char)-109;
unsigned short var_7 = (unsigned short)10495;
short var_14 = (short)31657;
int zero = 0;
unsigned short var_15 = (unsigned short)16268;
unsigned char var_16 = (unsigned char)216;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
