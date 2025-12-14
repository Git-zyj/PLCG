#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)7;
_Bool var_14 = (_Bool)1;
_Bool var_16 = (_Bool)1;
unsigned long long int var_18 = 4602419477443427965ULL;
int zero = 0;
long long int var_20 = 6594293102227225181LL;
unsigned long long int var_21 = 4111086712743477720ULL;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)71;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
