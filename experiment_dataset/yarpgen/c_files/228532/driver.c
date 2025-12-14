#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4800;
unsigned long long int var_3 = 13912821853739583370ULL;
int var_4 = 731137558;
unsigned short var_5 = (unsigned short)54290;
_Bool var_6 = (_Bool)1;
int zero = 0;
int var_10 = -564915438;
long long int var_11 = -798535010414559235LL;
unsigned long long int var_12 = 10092762708737908165ULL;
signed char var_13 = (signed char)126;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
