#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 164512926U;
short var_8 = (short)27621;
int var_19 = 269550955;
int zero = 0;
unsigned char var_20 = (unsigned char)164;
int var_21 = 714471433;
short var_22 = (short)30565;
unsigned char var_23 = (unsigned char)218;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
