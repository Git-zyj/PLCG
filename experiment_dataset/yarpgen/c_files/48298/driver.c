#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-61;
signed char var_1 = (signed char)33;
signed char var_2 = (signed char)17;
signed char var_3 = (signed char)-41;
signed char var_4 = (signed char)-73;
signed char var_7 = (signed char)-124;
signed char var_8 = (signed char)96;
signed char var_9 = (signed char)-26;
signed char var_10 = (signed char)-69;
unsigned char var_11 = (unsigned char)106;
int zero = 0;
signed char var_12 = (signed char)116;
signed char var_13 = (signed char)84;
signed char var_14 = (signed char)-31;
signed char var_15 = (signed char)27;
unsigned char var_16 = (unsigned char)29;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
