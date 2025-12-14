#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 11460487641500243363ULL;
long long int var_4 = -5274702606249055481LL;
unsigned int var_5 = 221806417U;
long long int var_7 = 326065598974955195LL;
short var_9 = (short)10792;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 3222728474958147963ULL;
short var_15 = (short)10082;
int zero = 0;
unsigned short var_17 = (unsigned short)31134;
unsigned short var_18 = (unsigned short)45004;
unsigned short var_19 = (unsigned short)21306;
int var_20 = -1918299010;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
