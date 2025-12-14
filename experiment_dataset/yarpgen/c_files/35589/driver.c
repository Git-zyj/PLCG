#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1040465381;
int var_2 = 321885772;
short var_6 = (short)29162;
int var_8 = 847719088;
int var_9 = 694032865;
int zero = 0;
int var_10 = -2050557973;
int var_11 = -1638718896;
short var_12 = (short)-7957;
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
