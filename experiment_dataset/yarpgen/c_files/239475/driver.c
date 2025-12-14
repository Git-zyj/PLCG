#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)160;
unsigned short var_8 = (unsigned short)57739;
short var_9 = (short)5397;
short var_10 = (short)21877;
unsigned int var_12 = 4210190568U;
int zero = 0;
unsigned long long int var_19 = 18257349867521289879ULL;
unsigned int var_20 = 3476257816U;
unsigned short var_21 = (unsigned short)55002;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
