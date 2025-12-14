#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16168978397859541874ULL;
int var_4 = 1287022268;
short var_6 = (short)10584;
_Bool var_9 = (_Bool)0;
long long int var_10 = 4454820307819539683LL;
unsigned long long int var_14 = 9633168624611217616ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)208;
short var_17 = (short)20689;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
