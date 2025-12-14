#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 2548670666U;
long long int var_4 = -939287134508533386LL;
unsigned long long int var_5 = 18371419844025526951ULL;
signed char var_8 = (signed char)-126;
long long int var_9 = -740818244597571133LL;
signed char var_10 = (signed char)114;
long long int var_12 = -1102346620476701895LL;
int zero = 0;
unsigned short var_13 = (unsigned short)28181;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 11729506640839590933ULL;
int var_16 = -1703057791;
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
