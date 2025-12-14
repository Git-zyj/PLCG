#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -8760382996021434014LL;
unsigned short var_7 = (unsigned short)49725;
signed char var_10 = (signed char)-66;
int zero = 0;
unsigned short var_11 = (unsigned short)50983;
unsigned long long int var_12 = 14918575608304590811ULL;
unsigned char var_13 = (unsigned char)235;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
