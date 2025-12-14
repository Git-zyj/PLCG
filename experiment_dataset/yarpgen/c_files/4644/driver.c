#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 465320725;
long long int var_5 = 6070426548163999703LL;
short var_7 = (short)14854;
unsigned char var_9 = (unsigned char)141;
unsigned char var_12 = (unsigned char)38;
unsigned long long int var_13 = 8792446181798639042ULL;
int var_16 = 875523927;
int zero = 0;
long long int var_18 = -8853591774817307531LL;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)65;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
