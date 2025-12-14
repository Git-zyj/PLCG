#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)57076;
unsigned short var_4 = (unsigned short)16112;
unsigned char var_7 = (unsigned char)238;
unsigned short var_8 = (unsigned short)47715;
signed char var_11 = (signed char)-20;
long long int var_12 = -3756152957988991317LL;
int zero = 0;
int var_15 = 713836867;
short var_16 = (short)-19133;
unsigned char var_17 = (unsigned char)193;
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
