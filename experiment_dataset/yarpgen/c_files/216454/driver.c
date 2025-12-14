#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7593275326900677940ULL;
long long int var_1 = 2780617296359635910LL;
unsigned short var_2 = (unsigned short)57628;
unsigned int var_3 = 910760677U;
_Bool var_5 = (_Bool)1;
long long int var_6 = -389178641305224622LL;
unsigned short var_7 = (unsigned short)31044;
long long int var_9 = -6594655926905948561LL;
long long int var_10 = -6793100368122344227LL;
int zero = 0;
unsigned short var_11 = (unsigned short)24988;
long long int var_12 = -4926153710806611023LL;
long long int var_13 = 195006481960325474LL;
long long int var_14 = -3429738804817572683LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
