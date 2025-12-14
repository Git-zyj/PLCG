#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17389;
short var_3 = (short)-10401;
long long int var_4 = -8467641649403435706LL;
unsigned int var_6 = 2126949619U;
unsigned long long int var_9 = 14005944091866716451ULL;
int zero = 0;
int var_11 = -1696659138;
unsigned char var_12 = (unsigned char)60;
unsigned long long int var_13 = 7211209611881077657ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
