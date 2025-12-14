#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1660858735U;
unsigned short var_7 = (unsigned short)19778;
long long int var_9 = 2773651690766321082LL;
short var_12 = (short)28794;
unsigned short var_14 = (unsigned short)45468;
int zero = 0;
long long int var_16 = 4147425300163228374LL;
unsigned long long int var_17 = 9092630826580394521ULL;
unsigned short var_18 = (unsigned short)17845;
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
