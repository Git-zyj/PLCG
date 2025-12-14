#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 559154147;
unsigned short var_3 = (unsigned short)51794;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 12414376263994493153ULL;
short var_11 = (short)20869;
int zero = 0;
unsigned int var_12 = 3460704514U;
int var_13 = 1715698780;
unsigned long long int var_14 = 15243857939562427463ULL;
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
