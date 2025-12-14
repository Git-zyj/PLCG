#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)159;
long long int var_3 = 4682740281596481980LL;
unsigned char var_5 = (unsigned char)18;
int var_8 = 1777947362;
int var_13 = -185965286;
short var_14 = (short)27071;
int zero = 0;
long long int var_15 = -6252245074630227229LL;
short var_16 = (short)22767;
unsigned char var_17 = (unsigned char)25;
unsigned int var_18 = 495149727U;
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
