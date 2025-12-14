#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_5 = 4656838456133962253LL;
int var_13 = 979051457;
unsigned long long int var_14 = 12170433767006106647ULL;
unsigned int var_15 = 1318613603U;
int zero = 0;
signed char var_19 = (signed char)49;
long long int var_20 = 2193082196138256516LL;
short var_21 = (short)-24943;
int var_22 = -1485856357;
unsigned long long int var_23 = 12407017721376299412ULL;
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
