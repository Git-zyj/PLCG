#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3526696818U;
_Bool var_1 = (_Bool)1;
long long int var_3 = -7665484531524518141LL;
unsigned short var_6 = (unsigned short)21416;
unsigned short var_9 = (unsigned short)35454;
_Bool var_11 = (_Bool)0;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = -7755447638395451345LL;
signed char var_19 = (signed char)-6;
_Bool var_20 = (_Bool)1;
int var_21 = -751302652;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
