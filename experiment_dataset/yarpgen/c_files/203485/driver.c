#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4183597970U;
_Bool var_3 = (_Bool)1;
signed char var_6 = (signed char)34;
long long int var_9 = 8495648718912591881LL;
int var_11 = -1944473113;
_Bool var_13 = (_Bool)1;
long long int var_14 = 2439053806378044573LL;
int zero = 0;
unsigned int var_16 = 157914485U;
long long int var_17 = -8167157128442221291LL;
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
