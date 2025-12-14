#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 5194715586824372520LL;
unsigned int var_10 = 3597527880U;
signed char var_11 = (signed char)109;
signed char var_12 = (signed char)-102;
unsigned int var_14 = 4206293917U;
int zero = 0;
long long int var_15 = 3889010679480127634LL;
unsigned long long int var_16 = 8029198599111349557ULL;
unsigned short var_17 = (unsigned short)2107;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
