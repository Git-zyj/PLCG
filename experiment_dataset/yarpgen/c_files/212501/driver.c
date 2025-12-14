#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7175960203981719163ULL;
signed char var_4 = (signed char)-123;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_12 = (short)-1559;
signed char var_13 = (signed char)-103;
void init() {
}

void checksum() {
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
