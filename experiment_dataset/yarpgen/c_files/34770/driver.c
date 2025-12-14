#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13385687912715810152ULL;
signed char var_2 = (signed char)101;
unsigned short var_6 = (unsigned short)19313;
unsigned long long int var_9 = 12844907323830565531ULL;
unsigned int var_10 = 3663437015U;
short var_11 = (short)-5924;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 7430460253359255775ULL;
short var_15 = (short)26583;
int var_16 = 1966261367;
unsigned int var_17 = 592626465U;
unsigned short var_18 = (unsigned short)45089;
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
