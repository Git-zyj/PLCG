#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
int var_3 = 1413476837;
unsigned char var_4 = (unsigned char)198;
unsigned long long int var_8 = 8943344797891996180ULL;
unsigned short var_9 = (unsigned short)51316;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 1617143307U;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)32;
long long int var_21 = 6944163642075842135LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
