#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)185;
long long int var_12 = -96650598302091707LL;
int zero = 0;
unsigned int var_17 = 4278285129U;
unsigned long long int var_18 = 9191865381813072780ULL;
unsigned short var_19 = (unsigned short)16474;
short var_20 = (short)5287;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
