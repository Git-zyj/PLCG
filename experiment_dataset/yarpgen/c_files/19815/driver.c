#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_10 = 12839289606206055628ULL;
unsigned short var_16 = (unsigned short)60299;
short var_17 = (short)11755;
int zero = 0;
int var_19 = -1506267817;
short var_20 = (short)7937;
unsigned short var_21 = (unsigned short)60706;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
