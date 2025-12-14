#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)6906;
unsigned short var_3 = (unsigned short)38797;
int var_5 = 1838920312;
unsigned long long int var_6 = 10379973166625777451ULL;
short var_7 = (short)-1102;
int var_8 = 188943615;
long long int var_10 = 8486212744957867296LL;
signed char var_12 = (signed char)67;
int zero = 0;
short var_13 = (short)-18888;
unsigned short var_14 = (unsigned short)45385;
unsigned long long int var_15 = 4138464229005290799ULL;
int var_16 = -527318791;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
