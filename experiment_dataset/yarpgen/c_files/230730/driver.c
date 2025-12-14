#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 38907996;
short var_6 = (short)-16298;
unsigned short var_9 = (unsigned short)14755;
unsigned short var_10 = (unsigned short)52432;
short var_14 = (short)11301;
short var_17 = (short)10928;
int zero = 0;
int var_18 = 903927016;
short var_19 = (short)-25864;
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
