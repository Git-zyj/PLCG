#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1326134959U;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 13454679218488145893ULL;
long long int var_5 = -7046872958842824872LL;
unsigned short var_8 = (unsigned short)18223;
unsigned long long int var_9 = 2089027112318036491ULL;
int zero = 0;
long long int var_10 = -9109599364725599040LL;
unsigned short var_11 = (unsigned short)35400;
unsigned long long int var_12 = 10762308175150540358ULL;
unsigned short var_13 = (unsigned short)44740;
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
