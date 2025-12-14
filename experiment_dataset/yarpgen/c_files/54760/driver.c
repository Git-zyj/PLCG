#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1563195341U;
long long int var_2 = -5486758297525798344LL;
short var_6 = (short)15528;
long long int var_8 = 3804802684586558543LL;
unsigned int var_14 = 230827381U;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3966969260U;
long long int var_20 = 6727121568505230848LL;
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
