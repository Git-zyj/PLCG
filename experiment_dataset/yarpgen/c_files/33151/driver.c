#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23657;
signed char var_1 = (signed char)-64;
unsigned int var_2 = 4065145976U;
short var_4 = (short)-19539;
short var_7 = (short)-11186;
short var_9 = (short)2598;
unsigned short var_17 = (unsigned short)48698;
int zero = 0;
unsigned short var_18 = (unsigned short)15089;
unsigned int var_19 = 2737420780U;
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
