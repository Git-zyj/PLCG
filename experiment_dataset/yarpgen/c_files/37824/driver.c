#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 606176091;
short var_9 = (short)5608;
long long int var_10 = -2256594255425101974LL;
short var_12 = (short)3257;
int zero = 0;
long long int var_13 = -4906572081754934655LL;
long long int var_14 = 6933444839773781933LL;
unsigned int var_15 = 3083347975U;
unsigned short var_16 = (unsigned short)22390;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
