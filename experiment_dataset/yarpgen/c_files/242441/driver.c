#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
int var_15 = 1545277409;
signed char var_16 = (signed char)64;
unsigned short var_17 = (unsigned short)63913;
signed char var_18 = (signed char)66;
long long int var_19 = 3433808937806325198LL;
signed char var_20 = (signed char)-40;
unsigned short var_21 = (unsigned short)52960;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
