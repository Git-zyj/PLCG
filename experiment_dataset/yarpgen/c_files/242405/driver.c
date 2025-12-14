#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -531237774310871874LL;
int var_2 = 1252752507;
long long int var_3 = 2026974015014486135LL;
int var_4 = -1082516098;
signed char var_8 = (signed char)40;
unsigned int var_9 = 2707602202U;
int zero = 0;
short var_12 = (short)13450;
int var_13 = -668741877;
unsigned int var_14 = 3437943622U;
void init() {
}

void checksum() {
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
