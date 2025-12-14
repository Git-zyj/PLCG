#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1433954537;
int var_2 = 1043196428;
short var_4 = (short)5811;
long long int var_8 = 352859601736416610LL;
unsigned int var_9 = 2636135297U;
unsigned short var_13 = (unsigned short)19641;
unsigned char var_15 = (unsigned char)58;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 4984383087761385288ULL;
unsigned char var_20 = (unsigned char)57;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
