#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 12072061817603170123ULL;
_Bool var_2 = (_Bool)0;
int var_3 = -1306788493;
_Bool var_4 = (_Bool)1;
int var_6 = -1292763257;
short var_7 = (short)32711;
_Bool var_9 = (_Bool)0;
int var_10 = -1315523406;
int zero = 0;
short var_11 = (short)29523;
signed char var_12 = (signed char)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
