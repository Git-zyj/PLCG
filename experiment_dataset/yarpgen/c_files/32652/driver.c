#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2773795509846462072LL;
short var_1 = (short)17676;
_Bool var_5 = (_Bool)0;
unsigned int var_9 = 1789111106U;
int zero = 0;
unsigned char var_12 = (unsigned char)139;
unsigned short var_13 = (unsigned short)56390;
long long int var_14 = 3383336183826210375LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
