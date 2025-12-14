#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3663959263392605293LL;
int var_2 = -1987481579;
unsigned int var_4 = 1779352251U;
long long int var_8 = 2159341338608700883LL;
unsigned int var_9 = 341105912U;
unsigned int var_10 = 2382425698U;
long long int var_11 = 2311351424918703306LL;
unsigned int var_17 = 3177229431U;
int zero = 0;
unsigned short var_19 = (unsigned short)62010;
int var_20 = 1302640478;
unsigned short var_21 = (unsigned short)22438;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 3653204451U;
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
