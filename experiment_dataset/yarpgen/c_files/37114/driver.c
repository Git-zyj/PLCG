#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)23827;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)0;
long long int var_6 = 6032522166683004903LL;
unsigned long long int var_7 = 4537694659922984150ULL;
unsigned char var_8 = (unsigned char)192;
short var_9 = (short)-28821;
short var_10 = (short)-7090;
unsigned long long int var_11 = 3023081704043242019ULL;
int var_12 = 452181297;
long long int var_14 = 3507338820192259134LL;
unsigned long long int var_16 = 3473740286473443541ULL;
int var_17 = -1059323306;
int var_18 = 1315112187;
int zero = 0;
short var_19 = (short)16738;
short var_20 = (short)-16945;
unsigned long long int var_21 = 6683946810675796081ULL;
long long int var_22 = 2685867213408280867LL;
unsigned long long int var_23 = 12394324760031373298ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
