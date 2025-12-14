#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62560;
long long int var_1 = -3031449622492493057LL;
unsigned short var_2 = (unsigned short)64908;
int var_3 = -1463727619;
int var_4 = 2135841223;
unsigned short var_11 = (unsigned short)46974;
int zero = 0;
unsigned short var_13 = (unsigned short)35137;
int var_14 = 1157370138;
void init() {
}

void checksum() {
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
