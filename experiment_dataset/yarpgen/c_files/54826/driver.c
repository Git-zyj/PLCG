#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 906278019U;
unsigned long long int var_1 = 17857645799668080668ULL;
signed char var_4 = (signed char)63;
unsigned short var_6 = (unsigned short)37951;
unsigned long long int var_7 = 11679226574211628834ULL;
signed char var_8 = (signed char)68;
signed char var_9 = (signed char)71;
unsigned long long int var_11 = 12250134471853132679ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 4013801356500248001ULL;
_Bool var_14 = (_Bool)0;
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
