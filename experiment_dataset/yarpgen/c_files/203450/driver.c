#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 271602352676182425LL;
unsigned int var_1 = 1782356047U;
long long int var_2 = 1437852508484729615LL;
unsigned int var_3 = 2789318297U;
unsigned short var_5 = (unsigned short)39361;
long long int var_6 = -163460325939090897LL;
unsigned int var_9 = 2282089177U;
unsigned int var_11 = 3869701091U;
long long int var_14 = -6224058627403037515LL;
unsigned short var_15 = (unsigned short)60110;
long long int var_17 = 5996357167221050366LL;
int zero = 0;
int var_18 = -839735047;
unsigned int var_19 = 3876612048U;
int var_20 = -1157993644;
unsigned short var_21 = (unsigned short)24899;
long long int var_22 = -3361763078680837326LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
