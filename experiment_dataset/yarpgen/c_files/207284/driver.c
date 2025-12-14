#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15658411260300799854ULL;
signed char var_4 = (signed char)-14;
signed char var_6 = (signed char)44;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 1214852662U;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 14649384076812513565ULL;
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
