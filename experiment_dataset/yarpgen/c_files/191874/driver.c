#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 450994907;
unsigned short var_1 = (unsigned short)32771;
signed char var_2 = (signed char)46;
unsigned char var_4 = (unsigned char)228;
int var_10 = -877443466;
int zero = 0;
short var_11 = (short)24840;
long long int var_12 = 7220550533558591004LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
