#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)77;
unsigned long long int var_3 = 9508583714975675777ULL;
unsigned int var_4 = 278376457U;
unsigned long long int var_8 = 2707883372666484423ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-24302;
unsigned long long int var_15 = 2435626376354451711ULL;
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
