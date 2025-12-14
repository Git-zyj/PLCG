#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)12868;
unsigned short var_4 = (unsigned short)56667;
_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)60910;
unsigned long long int var_10 = 17296429882468703120ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)55907;
int var_12 = 932574474;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
