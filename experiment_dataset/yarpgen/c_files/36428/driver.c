#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13040559664834814657ULL;
unsigned short var_4 = (unsigned short)45151;
long long int var_6 = -6252852230063971873LL;
int var_9 = -2089274549;
short var_11 = (short)29454;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 13188199915874482570ULL;
unsigned long long int var_14 = 2385992898138421066ULL;
unsigned long long int var_15 = 3694558513580805673ULL;
unsigned long long int var_16 = 3721833337156840418ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
