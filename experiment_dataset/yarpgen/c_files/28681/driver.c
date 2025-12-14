#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2450873060U;
unsigned short var_1 = (unsigned short)38;
unsigned long long int var_2 = 13857086303671055414ULL;
int var_3 = 1565723273;
_Bool var_4 = (_Bool)1;
short var_5 = (short)25530;
unsigned short var_8 = (unsigned short)19686;
short var_12 = (short)25064;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)51630;
int var_19 = -584109086;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
