#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 848255190U;
unsigned int var_3 = 3827334269U;
short var_4 = (short)-28884;
short var_5 = (short)26405;
unsigned int var_6 = 343324186U;
unsigned int var_9 = 975497646U;
unsigned int var_12 = 1720185107U;
unsigned int var_13 = 1582936393U;
int zero = 0;
unsigned int var_16 = 3367959867U;
unsigned int var_17 = 2621464470U;
short var_18 = (short)-4777;
short var_19 = (short)-15380;
unsigned int var_20 = 1949746243U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
