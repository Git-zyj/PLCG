#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 277849413U;
int var_8 = -1066460121;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 4289991967623655101ULL;
long long int var_16 = -1286646044204609269LL;
signed char var_17 = (signed char)-53;
unsigned short var_18 = (unsigned short)42417;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
