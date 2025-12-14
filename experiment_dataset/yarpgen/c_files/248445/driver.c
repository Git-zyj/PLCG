#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)61813;
unsigned short var_4 = (unsigned short)19644;
unsigned char var_8 = (unsigned char)140;
unsigned short var_9 = (unsigned short)41769;
long long int var_12 = -7719074281812810088LL;
long long int var_13 = 9172544617172718068LL;
int zero = 0;
unsigned short var_14 = (unsigned short)45797;
unsigned short var_15 = (unsigned short)48344;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
