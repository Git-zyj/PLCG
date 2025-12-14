#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 5303584416329429012ULL;
unsigned long long int var_6 = 16800661613648930552ULL;
unsigned short var_9 = (unsigned short)18137;
short var_13 = (short)-10355;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_15 = 4724552570610249258LL;
unsigned short var_16 = (unsigned short)30666;
signed char var_17 = (signed char)-117;
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
