#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 3038380986U;
unsigned int var_4 = 938716510U;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 2092719853U;
unsigned int var_12 = 3756827533U;
unsigned short var_13 = (unsigned short)44066;
unsigned short var_14 = (unsigned short)40301;
unsigned char var_17 = (unsigned char)78;
int zero = 0;
unsigned int var_19 = 3877770563U;
short var_20 = (short)21722;
unsigned long long int var_21 = 6959460377502827782ULL;
short var_22 = (short)-14311;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
