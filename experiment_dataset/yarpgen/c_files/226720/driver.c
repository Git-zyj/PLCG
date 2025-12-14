#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21285;
int var_1 = -700594520;
unsigned long long int var_2 = 15097927427518820204ULL;
short var_6 = (short)14646;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_10 = 234837148;
unsigned int var_11 = 2614773339U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
