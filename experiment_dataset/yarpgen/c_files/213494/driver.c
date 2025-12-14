#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4660148369164214521LL;
unsigned short var_6 = (unsigned short)58345;
unsigned int var_7 = 3331105159U;
int zero = 0;
unsigned short var_12 = (unsigned short)6783;
unsigned char var_13 = (unsigned char)152;
unsigned short var_14 = (unsigned short)271;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
