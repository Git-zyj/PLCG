#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20463;
long long int var_2 = 2422437528400436517LL;
int var_3 = -1865047144;
short var_6 = (short)-13558;
short var_7 = (short)32289;
unsigned char var_8 = (unsigned char)47;
unsigned char var_10 = (unsigned char)236;
short var_11 = (short)-25181;
int zero = 0;
signed char var_12 = (signed char)79;
signed char var_13 = (signed char)-108;
long long int var_14 = -2178233409982446104LL;
unsigned char var_15 = (unsigned char)34;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
