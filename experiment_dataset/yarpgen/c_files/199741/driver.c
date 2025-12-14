#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6457528598240241270ULL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 14679325088593395988ULL;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)10420;
_Bool var_12 = (_Bool)1;
long long int var_13 = -1475375710744843724LL;
int zero = 0;
unsigned short var_15 = (unsigned short)48497;
unsigned char var_16 = (unsigned char)193;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
