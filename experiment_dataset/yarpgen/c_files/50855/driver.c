#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)207;
int var_9 = -1426840941;
unsigned long long int var_10 = 10687333457672913640ULL;
signed char var_11 = (signed char)9;
_Bool var_12 = (_Bool)1;
unsigned short var_15 = (unsigned short)29346;
int zero = 0;
unsigned char var_17 = (unsigned char)210;
unsigned long long int var_18 = 15609506198278114572ULL;
void init() {
}

void checksum() {
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
