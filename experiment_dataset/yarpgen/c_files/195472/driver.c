#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8472;
unsigned long long int var_1 = 11302377135159929420ULL;
unsigned long long int var_2 = 17548152379127435568ULL;
unsigned short var_5 = (unsigned short)20058;
unsigned char var_7 = (unsigned char)51;
short var_9 = (short)-10811;
int zero = 0;
unsigned long long int var_11 = 13084657207363486495ULL;
unsigned char var_12 = (unsigned char)156;
signed char var_13 = (signed char)-28;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
