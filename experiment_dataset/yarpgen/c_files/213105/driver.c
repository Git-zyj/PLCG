#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -5730268917506869781LL;
int zero = 0;
unsigned short var_16 = (unsigned short)30085;
short var_17 = (short)30608;
int var_18 = -1812291032;
signed char var_19 = (signed char)-67;
unsigned char var_20 = (unsigned char)72;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
