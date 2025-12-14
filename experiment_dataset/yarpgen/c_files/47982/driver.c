#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6125773413669994331ULL;
short var_2 = (short)-13447;
long long int var_3 = -1607700387174495148LL;
unsigned char var_4 = (unsigned char)128;
_Bool var_5 = (_Bool)1;
int var_6 = 2089575848;
int var_7 = -2068528088;
unsigned long long int var_8 = 10888614805901078739ULL;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)219;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)20140;
long long int var_14 = -8329109873353296693LL;
int var_16 = 492590592;
int zero = 0;
unsigned short var_17 = (unsigned short)45313;
long long int var_18 = -6705403689803987162LL;
unsigned long long int var_19 = 13045798069916570756ULL;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)154;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
