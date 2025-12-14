#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)59057;
unsigned int var_13 = 2256377012U;
unsigned long long int var_17 = 18320254879917348546ULL;
int zero = 0;
unsigned int var_20 = 3329703222U;
long long int var_21 = 7746059111528799453LL;
unsigned short var_22 = (unsigned short)40585;
void init() {
}

void checksum() {
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
