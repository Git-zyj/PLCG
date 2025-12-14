#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59221;
short var_1 = (short)-20950;
unsigned short var_13 = (unsigned short)25914;
int var_15 = -1913726087;
unsigned short var_16 = (unsigned short)59828;
int zero = 0;
signed char var_18 = (signed char)-25;
unsigned char var_19 = (unsigned char)55;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
