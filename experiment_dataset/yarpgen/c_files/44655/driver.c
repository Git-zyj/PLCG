#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1382039984032013017LL;
unsigned long long int var_2 = 7985523387370363187ULL;
unsigned char var_3 = (unsigned char)136;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)1;
unsigned long long int var_10 = 2112428756727712776ULL;
int zero = 0;
short var_11 = (short)23650;
short var_12 = (short)18725;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
