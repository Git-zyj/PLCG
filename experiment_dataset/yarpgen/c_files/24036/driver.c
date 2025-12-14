#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8535853288698248249LL;
unsigned char var_2 = (unsigned char)107;
unsigned int var_4 = 3359294041U;
unsigned short var_7 = (unsigned short)36845;
unsigned char var_8 = (unsigned char)204;
unsigned int var_10 = 1129547479U;
unsigned char var_11 = (unsigned char)132;
unsigned short var_13 = (unsigned short)44818;
int zero = 0;
long long int var_15 = -9105493419090414630LL;
unsigned long long int var_16 = 11470285565825480887ULL;
short var_17 = (short)27083;
void init() {
}

void checksum() {
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
