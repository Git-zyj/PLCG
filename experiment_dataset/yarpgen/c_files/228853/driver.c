#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-10573;
short var_2 = (short)32091;
unsigned long long int var_4 = 1452196046258570576ULL;
_Bool var_6 = (_Bool)1;
_Bool var_9 = (_Bool)0;
short var_11 = (short)-19098;
int zero = 0;
int var_13 = -1205134384;
short var_14 = (short)-19190;
unsigned short var_15 = (unsigned short)20908;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
