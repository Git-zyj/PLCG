#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8003018962476187780LL;
unsigned short var_1 = (unsigned short)38461;
_Bool var_2 = (_Bool)1;
long long int var_10 = 7514258882724369194LL;
int zero = 0;
unsigned char var_11 = (unsigned char)100;
int var_12 = 639618660;
unsigned short var_13 = (unsigned short)27885;
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
