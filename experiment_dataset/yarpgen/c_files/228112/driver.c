#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62718;
short var_2 = (short)3172;
unsigned short var_3 = (unsigned short)1254;
unsigned short var_4 = (unsigned short)61977;
unsigned short var_5 = (unsigned short)6465;
short var_6 = (short)19124;
int zero = 0;
short var_10 = (short)27877;
unsigned short var_11 = (unsigned short)57861;
unsigned short var_12 = (unsigned short)42092;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
