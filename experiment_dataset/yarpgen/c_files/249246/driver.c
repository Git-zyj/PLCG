#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6018574375257482668LL;
unsigned char var_7 = (unsigned char)70;
int var_9 = -1218853090;
unsigned char var_10 = (unsigned char)245;
int zero = 0;
signed char var_14 = (signed char)-110;
signed char var_15 = (signed char)-16;
unsigned int var_16 = 3200725428U;
long long int var_17 = 1101715917190566584LL;
short var_18 = (short)12597;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
