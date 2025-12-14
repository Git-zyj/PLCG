#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2269053410534864820LL;
unsigned int var_1 = 1156180903U;
unsigned short var_3 = (unsigned short)32753;
short var_6 = (short)25371;
long long int var_7 = 3577290413122914649LL;
short var_8 = (short)31728;
unsigned short var_9 = (unsigned short)58218;
int zero = 0;
long long int var_10 = 8682174672041660046LL;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)9930;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
