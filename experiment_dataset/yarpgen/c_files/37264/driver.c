#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 968829769U;
short var_3 = (short)13188;
unsigned int var_5 = 4171235751U;
signed char var_6 = (signed char)-107;
short var_10 = (short)22798;
unsigned int var_11 = 1000577813U;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)31802;
unsigned short var_21 = (unsigned short)16067;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
