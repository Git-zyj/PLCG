#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 14392720753058122898ULL;
unsigned long long int var_11 = 11749355591967659359ULL;
int zero = 0;
unsigned long long int var_12 = 513594812755089976ULL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 3723918874875939323ULL;
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
