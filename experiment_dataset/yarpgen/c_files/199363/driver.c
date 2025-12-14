#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1096777149U;
unsigned int var_6 = 3475803386U;
int var_9 = -774742178;
unsigned int var_13 = 147017759U;
short var_14 = (short)-15138;
int zero = 0;
signed char var_17 = (signed char)59;
int var_18 = 1004938852;
unsigned int var_19 = 3123598593U;
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
