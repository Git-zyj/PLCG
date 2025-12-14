#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 522339382U;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
int var_4 = -2129867350;
unsigned int var_7 = 322995270U;
_Bool var_9 = (_Bool)1;
int var_12 = 993311224;
int zero = 0;
int var_14 = 347355887;
_Bool var_15 = (_Bool)0;
long long int var_16 = 9202977650659540579LL;
int var_17 = -350153321;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
