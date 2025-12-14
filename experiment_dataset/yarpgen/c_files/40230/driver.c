#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)30546;
unsigned long long int var_11 = 1075327024291871088ULL;
unsigned int var_13 = 4271877784U;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_20 = (short)24940;
unsigned short var_21 = (unsigned short)2835;
long long int var_22 = 4007877542877923878LL;
unsigned short var_23 = (unsigned short)14053;
signed char var_24 = (signed char)71;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
