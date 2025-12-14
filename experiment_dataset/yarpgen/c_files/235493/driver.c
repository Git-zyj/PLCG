#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-15;
short var_2 = (short)-11014;
unsigned short var_7 = (unsigned short)2655;
short var_9 = (short)-12028;
unsigned int var_11 = 3868162121U;
short var_12 = (short)1178;
unsigned long long int var_14 = 594996600782082187ULL;
short var_15 = (short)-31109;
int zero = 0;
short var_16 = (short)-15948;
signed char var_17 = (signed char)78;
signed char var_18 = (signed char)104;
signed char var_19 = (signed char)-68;
void init() {
}

void checksum() {
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
