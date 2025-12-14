#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9649562302322365904ULL;
unsigned short var_1 = (unsigned short)16666;
long long int var_5 = -434184887643352967LL;
unsigned short var_6 = (unsigned short)62517;
int zero = 0;
long long int var_14 = 4085714941835313255LL;
short var_15 = (short)-28316;
void init() {
}

void checksum() {
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
