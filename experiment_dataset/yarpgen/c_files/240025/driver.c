#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-20;
short var_9 = (short)22699;
int var_15 = 1552506830;
int zero = 0;
unsigned short var_20 = (unsigned short)64378;
unsigned int var_21 = 2442539924U;
long long int var_22 = 5435343892310627269LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
