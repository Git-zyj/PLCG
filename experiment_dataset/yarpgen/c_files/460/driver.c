#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64040;
unsigned short var_10 = (unsigned short)11957;
unsigned short var_13 = (unsigned short)36801;
unsigned short var_14 = (unsigned short)51327;
unsigned short var_16 = (unsigned short)12468;
unsigned short var_17 = (unsigned short)21550;
int zero = 0;
unsigned short var_18 = (unsigned short)2129;
unsigned short var_19 = (unsigned short)55992;
unsigned short var_20 = (unsigned short)64809;
unsigned short var_21 = (unsigned short)32464;
unsigned short var_22 = (unsigned short)7633;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
