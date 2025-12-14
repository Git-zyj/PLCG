#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15176856005178127777ULL;
signed char var_2 = (signed char)101;
long long int var_5 = 3669918419042225236LL;
_Bool var_8 = (_Bool)0;
int var_10 = -302977906;
unsigned char var_13 = (unsigned char)74;
int zero = 0;
unsigned int var_14 = 887625513U;
unsigned int var_15 = 2033300891U;
void init() {
}

void checksum() {
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
