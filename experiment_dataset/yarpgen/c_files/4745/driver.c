#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 170286064;
unsigned short var_9 = (unsigned short)1606;
signed char var_10 = (signed char)70;
int var_13 = 1871911693;
int zero = 0;
unsigned short var_19 = (unsigned short)4164;
int var_20 = -850342956;
signed char var_21 = (signed char)-12;
void init() {
}

void checksum() {
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
