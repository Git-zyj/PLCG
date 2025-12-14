#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8382619446469957659ULL;
long long int var_9 = 1119717807170778249LL;
_Bool var_12 = (_Bool)0;
long long int var_17 = 5823761932117100834LL;
_Bool var_18 = (_Bool)0;
int zero = 0;
int var_20 = 451295994;
signed char var_21 = (signed char)124;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
