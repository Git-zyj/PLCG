#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1807921862;
long long int var_6 = -6701393843486188191LL;
signed char var_7 = (signed char)-45;
signed char var_9 = (signed char)24;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_15 = 726657037;
unsigned long long int var_16 = 10296118867528621507ULL;
unsigned long long int var_17 = 9552581614059634785ULL;
short var_18 = (short)-8638;
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
