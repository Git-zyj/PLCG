#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)68;
short var_7 = (short)-8479;
unsigned char var_8 = (unsigned char)251;
_Bool var_15 = (_Bool)0;
int var_16 = 146716205;
int zero = 0;
short var_18 = (short)-24127;
unsigned char var_19 = (unsigned char)4;
short var_20 = (short)-23837;
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
