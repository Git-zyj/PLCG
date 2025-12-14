#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-24;
short var_1 = (short)7438;
int var_3 = -415202785;
unsigned short var_7 = (unsigned short)5580;
long long int var_12 = 5593179509592493395LL;
int zero = 0;
long long int var_13 = -1266142381256494778LL;
unsigned long long int var_14 = 13618398861759312820ULL;
unsigned short var_15 = (unsigned short)49575;
int var_16 = 678794058;
unsigned short var_17 = (unsigned short)20337;
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
