#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6065008167929525459ULL;
_Bool var_1 = (_Bool)1;
unsigned int var_8 = 1247560243U;
short var_10 = (short)4760;
long long int var_11 = 4639216650969966368LL;
int zero = 0;
unsigned int var_12 = 3576118759U;
unsigned short var_13 = (unsigned short)54147;
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
