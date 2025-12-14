#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-23325;
unsigned char var_13 = (unsigned char)38;
int var_17 = 960693432;
int zero = 0;
unsigned short var_19 = (unsigned short)64870;
signed char var_20 = (signed char)-23;
unsigned long long int var_21 = 15602465291848372431ULL;
void init() {
}

void checksum() {
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
