#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 715381564;
unsigned long long int var_7 = 13450906600729916816ULL;
unsigned char var_9 = (unsigned char)89;
unsigned int var_11 = 208745825U;
signed char var_14 = (signed char)-79;
short var_16 = (short)29883;
int zero = 0;
short var_17 = (short)21405;
unsigned int var_18 = 255050349U;
long long int var_19 = -2275369442354301359LL;
unsigned long long int var_20 = 4531456963368626185ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
