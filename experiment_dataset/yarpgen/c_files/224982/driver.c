#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 621954801;
long long int var_2 = 3430326985782432665LL;
_Bool var_3 = (_Bool)1;
short var_5 = (short)22681;
short var_6 = (short)-1899;
unsigned short var_8 = (unsigned short)55137;
_Bool var_9 = (_Bool)1;
long long int var_10 = -596534246860662863LL;
int zero = 0;
unsigned int var_11 = 743979991U;
long long int var_12 = 9160673424099885709LL;
unsigned int var_13 = 2543238874U;
void init() {
}

void checksum() {
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
