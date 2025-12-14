#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1297535172U;
short var_3 = (short)12203;
short var_8 = (short)-367;
unsigned short var_12 = (unsigned short)37715;
unsigned long long int var_16 = 3289667769437789247ULL;
int var_17 = 1924761261;
int zero = 0;
short var_18 = (short)32389;
int var_19 = 1534460630;
signed char var_20 = (signed char)-1;
int var_21 = 595103691;
unsigned long long int var_22 = 5501558444924899918ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
