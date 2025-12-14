#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22734;
unsigned short var_5 = (unsigned short)8540;
long long int var_6 = 8007986839859007426LL;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)35480;
int zero = 0;
long long int var_13 = -7894330607229709019LL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
