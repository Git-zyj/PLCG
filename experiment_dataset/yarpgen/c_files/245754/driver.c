#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 484684187U;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)47229;
unsigned short var_12 = (unsigned short)8133;
long long int var_15 = 6132120214127461863LL;
unsigned long long int var_18 = 9809115612401598108ULL;
int zero = 0;
int var_20 = 800206068;
int var_21 = 300452775;
unsigned short var_22 = (unsigned short)62611;
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
