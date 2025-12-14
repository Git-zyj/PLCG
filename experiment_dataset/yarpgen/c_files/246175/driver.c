#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25556;
signed char var_4 = (signed char)-24;
unsigned short var_5 = (unsigned short)19020;
unsigned long long int var_6 = 696222681844045728ULL;
unsigned char var_8 = (unsigned char)226;
int var_9 = 331692710;
unsigned short var_11 = (unsigned short)20186;
unsigned int var_13 = 2010933474U;
int zero = 0;
signed char var_15 = (signed char)-34;
unsigned short var_16 = (unsigned short)24005;
signed char var_17 = (signed char)-29;
unsigned short var_18 = (unsigned short)29073;
signed char var_19 = (signed char)-23;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
