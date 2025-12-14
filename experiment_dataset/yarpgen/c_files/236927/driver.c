#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)107;
short var_6 = (short)14034;
long long int var_7 = -2808139063636439805LL;
int var_8 = -390712735;
unsigned long long int var_9 = 11363013559695966089ULL;
int zero = 0;
unsigned int var_12 = 715438722U;
unsigned char var_13 = (unsigned char)38;
void init() {
}

void checksum() {
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
