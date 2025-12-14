#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)9;
unsigned short var_1 = (unsigned short)42817;
signed char var_6 = (signed char)71;
signed char var_7 = (signed char)-106;
unsigned short var_9 = (unsigned short)14694;
unsigned short var_12 = (unsigned short)14867;
short var_14 = (short)-13448;
int zero = 0;
unsigned short var_17 = (unsigned short)41906;
signed char var_18 = (signed char)-25;
short var_19 = (short)20191;
unsigned short var_20 = (unsigned short)14232;
void init() {
}

void checksum() {
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
