#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21896;
unsigned long long int var_5 = 15672012118800681115ULL;
int var_6 = -1835491000;
short var_10 = (short)-31460;
int var_11 = -638626724;
short var_12 = (short)19612;
unsigned int var_13 = 1697797284U;
unsigned short var_14 = (unsigned short)59271;
unsigned char var_15 = (unsigned char)126;
signed char var_17 = (signed char)95;
int zero = 0;
short var_19 = (short)19802;
long long int var_20 = 7955656389611311724LL;
void init() {
}

void checksum() {
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
