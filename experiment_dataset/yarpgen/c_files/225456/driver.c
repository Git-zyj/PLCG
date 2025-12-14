#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)93;
unsigned char var_2 = (unsigned char)19;
unsigned short var_5 = (unsigned short)57936;
unsigned int var_6 = 2623307547U;
unsigned short var_7 = (unsigned short)53303;
unsigned long long int var_8 = 5957134815617048928ULL;
long long int var_9 = -8041428455567489447LL;
unsigned char var_15 = (unsigned char)234;
int zero = 0;
unsigned short var_16 = (unsigned short)29733;
unsigned long long int var_17 = 9024885667195598832ULL;
unsigned short var_18 = (unsigned short)22501;
void init() {
}

void checksum() {
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
