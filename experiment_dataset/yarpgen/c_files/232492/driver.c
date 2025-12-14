#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -403621042;
unsigned short var_1 = (unsigned short)45835;
unsigned int var_2 = 1927411963U;
long long int var_5 = 5359784929170987475LL;
unsigned long long int var_8 = 11453123853401070911ULL;
unsigned int var_10 = 443967836U;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_12 = (short)-30267;
_Bool var_13 = (_Bool)0;
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
