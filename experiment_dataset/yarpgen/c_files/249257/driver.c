#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)62341;
unsigned long long int var_7 = 4751099296422801187ULL;
unsigned char var_11 = (unsigned char)162;
int zero = 0;
long long int var_14 = 8391609474577218422LL;
unsigned char var_15 = (unsigned char)131;
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
