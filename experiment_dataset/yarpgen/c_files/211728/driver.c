#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49399;
unsigned char var_2 = (unsigned char)185;
short var_4 = (short)29827;
short var_7 = (short)-16500;
unsigned int var_8 = 3694472502U;
unsigned int var_9 = 3151865909U;
unsigned int var_10 = 472442U;
signed char var_12 = (signed char)5;
int zero = 0;
unsigned short var_17 = (unsigned short)27446;
unsigned short var_18 = (unsigned short)30774;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
