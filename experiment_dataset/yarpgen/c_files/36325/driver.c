#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)27266;
short var_10 = (short)-27843;
int zero = 0;
unsigned char var_17 = (unsigned char)44;
short var_18 = (short)27903;
unsigned short var_19 = (unsigned short)19446;
unsigned int var_20 = 376181718U;
signed char var_21 = (signed char)68;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
