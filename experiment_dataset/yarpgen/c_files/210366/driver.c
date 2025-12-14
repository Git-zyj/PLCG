#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)35903;
unsigned long long int var_4 = 4501717264731088829ULL;
long long int var_5 = 4872840920843297102LL;
signed char var_10 = (signed char)30;
unsigned long long int var_14 = 4824812637596118300ULL;
int zero = 0;
long long int var_15 = 7868266704812056389LL;
unsigned long long int var_16 = 10820686497117365815ULL;
signed char var_17 = (signed char)-101;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
