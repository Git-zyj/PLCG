#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)183;
unsigned short var_2 = (unsigned short)25974;
signed char var_3 = (signed char)41;
short var_4 = (short)10833;
long long int var_10 = -26195156108503671LL;
unsigned char var_11 = (unsigned char)70;
int zero = 0;
unsigned int var_12 = 3592205035U;
unsigned char var_13 = (unsigned char)215;
unsigned int var_14 = 782718926U;
signed char var_15 = (signed char)53;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
