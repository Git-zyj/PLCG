#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 16842584657174034566ULL;
signed char var_5 = (signed char)-5;
long long int var_7 = 6669034724288070443LL;
long long int var_8 = -2285740896969970634LL;
long long int var_9 = 3622075223164075789LL;
long long int var_11 = -4614717334375840900LL;
int zero = 0;
unsigned short var_14 = (unsigned short)29120;
signed char var_15 = (signed char)-108;
long long int var_16 = -514991415627451649LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
