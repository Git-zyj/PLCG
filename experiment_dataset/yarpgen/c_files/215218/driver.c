#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5208983332172283943ULL;
unsigned long long int var_2 = 5150905715804890731ULL;
unsigned short var_3 = (unsigned short)60818;
unsigned short var_7 = (unsigned short)16277;
int zero = 0;
unsigned short var_15 = (unsigned short)28423;
unsigned long long int var_16 = 11766813902278495480ULL;
unsigned int var_17 = 3922880653U;
unsigned long long int var_18 = 9966988346795220377ULL;
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
