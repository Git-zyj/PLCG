#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9698048742136672119ULL;
unsigned int var_3 = 1247260348U;
unsigned int var_5 = 227555182U;
short var_7 = (short)14345;
signed char var_8 = (signed char)68;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)20279;
unsigned int var_15 = 3312121117U;
unsigned int var_16 = 3936881327U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
