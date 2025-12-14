#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -739130821;
signed char var_6 = (signed char)11;
unsigned long long int var_7 = 10798548704712694768ULL;
unsigned short var_8 = (unsigned short)13857;
_Bool var_9 = (_Bool)1;
long long int var_10 = -5589426182511469799LL;
int zero = 0;
unsigned short var_12 = (unsigned short)38599;
unsigned short var_13 = (unsigned short)33500;
signed char var_14 = (signed char)-82;
void init() {
}

void checksum() {
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
