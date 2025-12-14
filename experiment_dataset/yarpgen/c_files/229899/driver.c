#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3005405544799321324LL;
unsigned int var_4 = 3823046494U;
long long int var_9 = -4574647506226660039LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = -178758850;
unsigned int var_13 = 1361796363U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
