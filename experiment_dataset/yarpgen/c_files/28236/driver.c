#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1681731430;
unsigned char var_1 = (unsigned char)187;
unsigned int var_2 = 3628620301U;
unsigned int var_3 = 1320799468U;
signed char var_4 = (signed char)-49;
_Bool var_6 = (_Bool)0;
int var_7 = 1793081253;
int zero = 0;
unsigned short var_14 = (unsigned short)103;
unsigned int var_15 = 351342923U;
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
