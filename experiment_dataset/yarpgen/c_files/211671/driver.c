#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_3 = 2095637816;
_Bool var_6 = (_Bool)0;
unsigned short var_9 = (unsigned short)43164;
unsigned long long int var_12 = 200897271931506360ULL;
int var_15 = -1576283624;
int zero = 0;
short var_16 = (short)-28392;
unsigned int var_17 = 4020765572U;
long long int var_18 = 8814642516681890843LL;
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
