#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1953732698;
long long int var_4 = -2979971374754411897LL;
short var_5 = (short)-12405;
int var_8 = -501217664;
unsigned int var_10 = 3000309985U;
int zero = 0;
long long int var_12 = 5074127154088616702LL;
unsigned short var_13 = (unsigned short)37407;
int var_14 = -1356944151;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
