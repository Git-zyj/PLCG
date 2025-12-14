#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 879010609U;
short var_1 = (short)20551;
signed char var_4 = (signed char)33;
short var_6 = (short)16493;
unsigned int var_8 = 3874641771U;
short var_9 = (short)-23537;
short var_10 = (short)-11992;
short var_11 = (short)4794;
int zero = 0;
signed char var_13 = (signed char)-63;
unsigned int var_14 = 2505994847U;
short var_15 = (short)-825;
short var_16 = (short)27539;
short var_17 = (short)11951;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
