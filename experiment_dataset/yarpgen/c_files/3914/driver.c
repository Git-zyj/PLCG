#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1859307562U;
unsigned short var_3 = (unsigned short)52306;
short var_4 = (short)1496;
unsigned int var_5 = 3342104751U;
signed char var_6 = (signed char)70;
signed char var_7 = (signed char)102;
unsigned int var_8 = 1099316097U;
unsigned short var_9 = (unsigned short)16299;
int zero = 0;
unsigned int var_10 = 1451520450U;
unsigned int var_11 = 2600568244U;
unsigned int var_12 = 484852869U;
unsigned int var_13 = 1188338205U;
short var_14 = (short)-21948;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
