#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)25060;
unsigned short var_5 = (unsigned short)13903;
int var_6 = 500900506;
short var_8 = (short)-4404;
int zero = 0;
signed char var_11 = (signed char)-9;
short var_12 = (short)-14382;
unsigned int var_13 = 3470905729U;
unsigned long long int var_14 = 16307092082400023054ULL;
signed char var_15 = (signed char)-127;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
