#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-9;
short var_3 = (short)-19105;
unsigned short var_5 = (unsigned short)35721;
unsigned long long int var_7 = 665294625609819066ULL;
int zero = 0;
signed char var_10 = (signed char)-107;
unsigned int var_11 = 285603726U;
int var_12 = 359190414;
unsigned int var_13 = 2484547858U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
