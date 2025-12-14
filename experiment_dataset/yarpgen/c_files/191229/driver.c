#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)13705;
short var_5 = (short)-13264;
unsigned long long int var_7 = 10510399380094479213ULL;
unsigned int var_9 = 1595349351U;
_Bool var_15 = (_Bool)1;
unsigned short var_19 = (unsigned short)11074;
int zero = 0;
signed char var_20 = (signed char)105;
unsigned long long int var_21 = 310870154860917548ULL;
void init() {
}

void checksum() {
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
