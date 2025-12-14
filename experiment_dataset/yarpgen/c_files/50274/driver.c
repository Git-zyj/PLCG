#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1878342759;
long long int var_2 = 8470662452393417488LL;
_Bool var_6 = (_Bool)1;
unsigned short var_11 = (unsigned short)725;
int zero = 0;
unsigned int var_13 = 3653645684U;
unsigned short var_14 = (unsigned short)26185;
void init() {
}

void checksum() {
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
