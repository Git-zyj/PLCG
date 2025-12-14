#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7633247941648985476LL;
unsigned short var_4 = (unsigned short)42601;
_Bool var_8 = (_Bool)1;
long long int var_10 = -346818180697415166LL;
int zero = 0;
unsigned short var_12 = (unsigned short)11159;
unsigned char var_13 = (unsigned char)120;
long long int var_14 = 4743774784779579107LL;
short var_15 = (short)30198;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
