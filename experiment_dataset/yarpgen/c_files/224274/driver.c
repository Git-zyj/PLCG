#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2468536652628082734LL;
long long int var_2 = -1200646333846324925LL;
unsigned long long int var_3 = 384977121576493986ULL;
signed char var_9 = (signed char)64;
int zero = 0;
long long int var_13 = 6199063419125640223LL;
unsigned short var_14 = (unsigned short)45168;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
