#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13480;
unsigned short var_3 = (unsigned short)10153;
int var_7 = -308542905;
int var_9 = 442817880;
long long int var_14 = 7774295660831211577LL;
int zero = 0;
unsigned char var_15 = (unsigned char)84;
unsigned long long int var_16 = 10950558058644876016ULL;
int var_17 = 1876248947;
int var_18 = 1091520225;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
