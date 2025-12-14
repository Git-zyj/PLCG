#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)12793;
signed char var_10 = (signed char)-105;
unsigned char var_11 = (unsigned char)91;
int zero = 0;
unsigned short var_15 = (unsigned short)62003;
unsigned short var_16 = (unsigned short)26799;
short var_17 = (short)-1071;
signed char var_18 = (signed char)-82;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
