#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-61;
signed char var_4 = (signed char)-89;
int var_5 = 769798087;
unsigned int var_8 = 2570538642U;
unsigned short var_9 = (unsigned short)39013;
unsigned short var_10 = (unsigned short)27537;
signed char var_11 = (signed char)24;
int zero = 0;
int var_13 = 1284651978;
unsigned char var_14 = (unsigned char)250;
unsigned int var_15 = 991915555U;
unsigned short var_16 = (unsigned short)32949;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
