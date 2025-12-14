#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)17172;
long long int var_2 = -8709314138855069959LL;
unsigned short var_3 = (unsigned short)11803;
unsigned char var_5 = (unsigned char)31;
short var_6 = (short)-26870;
int zero = 0;
unsigned char var_11 = (unsigned char)194;
_Bool var_12 = (_Bool)0;
long long int var_13 = 2653328047423229132LL;
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
