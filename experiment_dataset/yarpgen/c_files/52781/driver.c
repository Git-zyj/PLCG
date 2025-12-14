#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)39;
unsigned short var_4 = (unsigned short)36497;
int var_13 = 1722699070;
int var_15 = 31993547;
long long int var_18 = 2788837582224530309LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 3034692157U;
unsigned long long int var_22 = 5878206014309214016ULL;
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
