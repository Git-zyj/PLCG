#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4286251381U;
unsigned short var_5 = (unsigned short)3629;
short var_9 = (short)4979;
signed char var_12 = (signed char)-33;
unsigned int var_14 = 3656570574U;
int zero = 0;
unsigned char var_17 = (unsigned char)67;
unsigned long long int var_18 = 8656230172933621749ULL;
unsigned short var_19 = (unsigned short)56781;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
