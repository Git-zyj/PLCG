#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8739886999533170249LL;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned char var_7 = (unsigned char)138;
unsigned short var_10 = (unsigned short)23388;
unsigned int var_12 = 533294884U;
long long int var_13 = 6548582899951817754LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
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
