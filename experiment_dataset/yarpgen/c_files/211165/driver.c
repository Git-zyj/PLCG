#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25323;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 3209968192031988220ULL;
unsigned short var_6 = (unsigned short)32358;
long long int var_7 = -987691637092941112LL;
_Bool var_9 = (_Bool)0;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_14 = 12117832;
_Bool var_15 = (_Bool)0;
short var_16 = (short)27940;
unsigned short var_17 = (unsigned short)40323;
unsigned short var_18 = (unsigned short)61158;
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
