#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1372032338;
signed char var_3 = (signed char)(-127 - 1);
signed char var_4 = (signed char)-57;
int var_12 = -1075670577;
signed char var_13 = (signed char)-96;
unsigned int var_17 = 1542061314U;
int zero = 0;
short var_18 = (short)-32674;
unsigned int var_19 = 2733604152U;
signed char var_20 = (signed char)8;
short var_21 = (short)10273;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
