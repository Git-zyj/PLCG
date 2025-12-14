#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5666562466998776645LL;
unsigned int var_2 = 3545259041U;
unsigned int var_6 = 1724951498U;
short var_9 = (short)-2614;
short var_13 = (short)-9013;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)20991;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
