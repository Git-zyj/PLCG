#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1598149160U;
unsigned long long int var_6 = 1414653183413591411ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = 2109084080;
int var_12 = -601927647;
long long int var_13 = -3544356620584055433LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
