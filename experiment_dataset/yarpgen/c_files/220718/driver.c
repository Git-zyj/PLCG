#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -2837372196559451085LL;
long long int var_8 = -2526106692000583333LL;
long long int var_10 = 1957126409457545967LL;
unsigned int var_15 = 2503891112U;
int zero = 0;
unsigned int var_16 = 3539956512U;
short var_17 = (short)-7830;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
