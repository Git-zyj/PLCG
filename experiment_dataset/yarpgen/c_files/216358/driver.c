#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)49;
unsigned long long int var_10 = 12200055092583579979ULL;
unsigned char var_12 = (unsigned char)142;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 12753534987903897961ULL;
unsigned long long int var_19 = 2901860238335259493ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
