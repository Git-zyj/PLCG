#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1457458261;
short var_2 = (short)-8096;
unsigned int var_4 = 3605574076U;
unsigned long long int var_7 = 9653219281400773890ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_13 = 17307700069536488236ULL;
int zero = 0;
unsigned int var_17 = 1161044736U;
int var_18 = -1801984968;
void init() {
}

void checksum() {
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
