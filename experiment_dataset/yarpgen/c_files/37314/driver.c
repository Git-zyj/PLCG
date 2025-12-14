#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)115;
unsigned short var_1 = (unsigned short)5360;
unsigned long long int var_3 = 8411012144182848556ULL;
unsigned int var_4 = 4029357899U;
unsigned int var_7 = 568917713U;
long long int var_9 = -3254620923399184792LL;
int var_10 = -1335852603;
signed char var_11 = (signed char)-101;
_Bool var_12 = (_Bool)1;
long long int var_13 = 7705539430763781512LL;
long long int var_15 = 5476026732157408638LL;
_Bool var_16 = (_Bool)0;
_Bool var_18 = (_Bool)1;
long long int var_19 = 7344998319934152196LL;
int zero = 0;
long long int var_20 = 308808920367764163LL;
long long int var_21 = -6619711697488998155LL;
long long int var_22 = 8065408186178924513LL;
void init() {
}

void checksum() {
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
