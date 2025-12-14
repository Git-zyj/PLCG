#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 143748445;
int var_1 = 343247134;
signed char var_3 = (signed char)-77;
unsigned int var_4 = 2507007862U;
signed char var_6 = (signed char)-117;
unsigned short var_8 = (unsigned short)15049;
unsigned int var_9 = 2390766773U;
int zero = 0;
signed char var_15 = (signed char)71;
short var_16 = (short)7238;
short var_17 = (short)-19872;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
