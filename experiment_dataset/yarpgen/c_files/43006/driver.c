#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-27917;
short var_9 = (short)-19503;
int var_13 = 237162685;
unsigned short var_15 = (unsigned short)37261;
signed char var_17 = (signed char)-88;
int zero = 0;
long long int var_18 = 5200044235674001628LL;
unsigned int var_19 = 4034190738U;
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
