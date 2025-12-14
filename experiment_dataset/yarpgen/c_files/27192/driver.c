#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7516516674198516331LL;
long long int var_4 = -94397903181461501LL;
unsigned short var_5 = (unsigned short)34474;
unsigned short var_7 = (unsigned short)49783;
int zero = 0;
unsigned short var_10 = (unsigned short)36441;
unsigned short var_11 = (unsigned short)64849;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
