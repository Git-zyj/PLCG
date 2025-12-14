#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 4975628142712366141LL;
short var_8 = (short)-11621;
short var_11 = (short)6264;
int zero = 0;
unsigned short var_19 = (unsigned short)16831;
long long int var_20 = 4804129892935751398LL;
void init() {
}

void checksum() {
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
