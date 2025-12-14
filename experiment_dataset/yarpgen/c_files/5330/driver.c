#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-4004;
signed char var_5 = (signed char)-107;
unsigned short var_6 = (unsigned short)45463;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)18334;
short var_19 = (short)-24226;
unsigned char var_20 = (unsigned char)198;
void init() {
}

void checksum() {
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
