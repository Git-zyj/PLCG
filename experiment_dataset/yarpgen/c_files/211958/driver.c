#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-59;
unsigned int var_7 = 3022950042U;
signed char var_10 = (signed char)16;
signed char var_11 = (signed char)10;
unsigned short var_19 = (unsigned short)45787;
int zero = 0;
signed char var_20 = (signed char)99;
signed char var_21 = (signed char)-60;
unsigned short var_22 = (unsigned short)33614;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
