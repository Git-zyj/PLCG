#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)36828;
signed char var_7 = (signed char)99;
signed char var_8 = (signed char)-127;
int zero = 0;
unsigned int var_13 = 1960461459U;
long long int var_14 = 341475357396377607LL;
long long int var_15 = 5460426652788321666LL;
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
