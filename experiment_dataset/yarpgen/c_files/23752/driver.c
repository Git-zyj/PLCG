#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55637;
unsigned long long int var_3 = 6308105442567691551ULL;
long long int var_8 = 4175610462869441733LL;
unsigned short var_14 = (unsigned short)45705;
int zero = 0;
int var_17 = 969854956;
unsigned short var_18 = (unsigned short)36896;
unsigned char var_19 = (unsigned char)228;
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
