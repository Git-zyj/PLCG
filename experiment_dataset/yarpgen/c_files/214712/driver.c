#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49573;
long long int var_6 = -1674676545952963255LL;
unsigned char var_8 = (unsigned char)42;
int var_9 = 127752563;
int zero = 0;
unsigned char var_12 = (unsigned char)23;
signed char var_13 = (signed char)-50;
unsigned long long int var_14 = 4556074895495731058ULL;
unsigned char var_15 = (unsigned char)117;
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
