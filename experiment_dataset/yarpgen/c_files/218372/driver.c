#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -7805652599959679610LL;
signed char var_10 = (signed char)57;
signed char var_11 = (signed char)-101;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_13 = 6352165518970621451LL;
signed char var_14 = (signed char)-100;
long long int var_15 = -6717530979886344346LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
