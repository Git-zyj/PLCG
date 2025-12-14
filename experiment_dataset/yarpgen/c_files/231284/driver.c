#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 486846658U;
int zero = 0;
long long int var_10 = 8142870162317599642LL;
unsigned long long int var_11 = 4866419205402533383ULL;
signed char var_12 = (signed char)-44;
unsigned long long int var_13 = 2574082261782254106ULL;
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
