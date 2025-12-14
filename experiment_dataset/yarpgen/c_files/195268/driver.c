#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4157551223U;
signed char var_5 = (signed char)5;
int var_8 = -536679677;
long long int var_9 = -2277974002417633432LL;
unsigned char var_10 = (unsigned char)251;
int zero = 0;
int var_13 = -1007562640;
int var_14 = -1242598792;
unsigned short var_15 = (unsigned short)64330;
void init() {
}

void checksum() {
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
