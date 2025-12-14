#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2726276248U;
short var_9 = (short)16613;
unsigned int var_12 = 1505755893U;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = -8312739707050672220LL;
long long int var_20 = -4345488847963286021LL;
signed char var_21 = (signed char)50;
unsigned char var_22 = (unsigned char)184;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
