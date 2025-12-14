#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2950473668773173156ULL;
unsigned int var_4 = 1175155561U;
signed char var_10 = (signed char)28;
unsigned short var_11 = (unsigned short)58764;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_15 = 1135802679622678961LL;
signed char var_16 = (signed char)-64;
int var_17 = 464850516;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
