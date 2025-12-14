#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 152503463U;
unsigned char var_2 = (unsigned char)165;
short var_9 = (short)28558;
unsigned char var_11 = (unsigned char)4;
unsigned long long int var_13 = 16481903223594634019ULL;
unsigned short var_14 = (unsigned short)46391;
unsigned int var_15 = 1964856572U;
int zero = 0;
unsigned char var_16 = (unsigned char)169;
unsigned int var_17 = 3882745172U;
unsigned long long int var_18 = 18169023218725996004ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
