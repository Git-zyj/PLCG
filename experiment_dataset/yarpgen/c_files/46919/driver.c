#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1056951933U;
unsigned long long int var_8 = 11523178093176983203ULL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_17 = 14483233700591382849ULL;
int zero = 0;
signed char var_19 = (signed char)41;
long long int var_20 = 6813756198110908985LL;
int var_21 = -1855425040;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
