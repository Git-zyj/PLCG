#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18468;
_Bool var_4 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_13 = 16483204899145791802ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)41720;
unsigned int var_19 = 269049127U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
