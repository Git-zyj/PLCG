#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47996;
unsigned long long int var_5 = 16993104113279052230ULL;
unsigned int var_6 = 901519469U;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)12127;
int var_10 = 851546159;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)36845;
signed char var_21 = (signed char)84;
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
