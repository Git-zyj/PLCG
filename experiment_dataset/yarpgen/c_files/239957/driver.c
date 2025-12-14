#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17492701201083815470ULL;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 3378445919384252234ULL;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
long long int var_8 = -7975121831013751796LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 17577386941228414489ULL;
long long int var_11 = -4113920871905844568LL;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)44295;
unsigned short var_14 = (unsigned short)58611;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
