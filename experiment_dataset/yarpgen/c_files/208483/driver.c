#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -715038157904618806LL;
long long int var_4 = -6113229679954307643LL;
short var_5 = (short)5991;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)35617;
int var_13 = -1797208943;
int zero = 0;
unsigned long long int var_14 = 7884682432423981968ULL;
unsigned int var_15 = 1691229097U;
int var_16 = -4944408;
long long int var_17 = -6634476531960533420LL;
int var_18 = 635917787;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
