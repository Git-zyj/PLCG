#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)62791;
long long int var_4 = 5922319596134621939LL;
unsigned int var_5 = 415046367U;
unsigned char var_7 = (unsigned char)67;
long long int var_9 = -9148745578733952440LL;
int zero = 0;
unsigned char var_11 = (unsigned char)74;
unsigned int var_12 = 1828927764U;
unsigned int var_13 = 1616426022U;
short var_14 = (short)-22394;
unsigned char var_15 = (unsigned char)251;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
