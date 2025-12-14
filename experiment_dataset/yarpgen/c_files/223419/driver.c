#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15061;
unsigned char var_1 = (unsigned char)118;
unsigned int var_4 = 292250681U;
long long int var_6 = -4492938729347806556LL;
unsigned char var_9 = (unsigned char)251;
int zero = 0;
unsigned short var_10 = (unsigned short)28279;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
