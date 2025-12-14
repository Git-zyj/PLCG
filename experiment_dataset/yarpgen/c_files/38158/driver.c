#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 7821728637013033865LL;
unsigned char var_7 = (unsigned char)10;
signed char var_8 = (signed char)-4;
int zero = 0;
short var_12 = (short)19900;
unsigned short var_13 = (unsigned short)14680;
unsigned long long int var_14 = 7462627073136742324ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
