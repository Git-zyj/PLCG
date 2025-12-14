#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)2048;
unsigned long long int var_6 = 5809682581871499068ULL;
unsigned long long int var_8 = 17823107501356856899ULL;
unsigned long long int var_9 = 6594530030576191154ULL;
unsigned long long int var_10 = 8122905206002400929ULL;
short var_11 = (short)32507;
unsigned long long int var_12 = 7072122913311240989ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 411172576451338999ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
