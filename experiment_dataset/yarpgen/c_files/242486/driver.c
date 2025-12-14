#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_12 = (signed char)-70;
unsigned long long int var_13 = 9871317436087754647ULL;
unsigned int var_14 = 3107096271U;
signed char var_18 = (signed char)-103;
int zero = 0;
unsigned short var_20 = (unsigned short)44287;
signed char var_21 = (signed char)-73;
void init() {
}

void checksum() {
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
