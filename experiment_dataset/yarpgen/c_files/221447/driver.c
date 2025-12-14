#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_4 = (unsigned short)54937;
signed char var_5 = (signed char)-70;
unsigned int var_7 = 2744070126U;
long long int var_9 = -4788948697371316627LL;
short var_10 = (short)-27117;
unsigned int var_12 = 543174861U;
int zero = 0;
int var_19 = 1788665203;
short var_20 = (short)18266;
short var_21 = (short)32706;
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
