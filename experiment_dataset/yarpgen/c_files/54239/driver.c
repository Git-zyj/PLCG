#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2835534471548643189LL;
long long int var_1 = 7109403495054120338LL;
unsigned int var_2 = 2204458013U;
unsigned int var_5 = 2232158623U;
unsigned int var_6 = 414567487U;
int var_9 = 231419614;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 2906811457U;
long long int var_12 = -6643055766360440578LL;
short var_13 = (short)-24960;
signed char var_14 = (signed char)125;
int zero = 0;
long long int var_16 = -8663776174318594477LL;
short var_17 = (short)-14698;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
