#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16226251766537145134ULL;
unsigned short var_3 = (unsigned short)42629;
unsigned short var_12 = (unsigned short)49600;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_19 = 7155597461705248219LL;
int var_20 = -1103470098;
unsigned short var_21 = (unsigned short)24225;
_Bool var_22 = (_Bool)0;
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
