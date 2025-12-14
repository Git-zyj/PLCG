#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1862684434;
long long int var_4 = 591622901535619005LL;
unsigned int var_5 = 4038706108U;
signed char var_6 = (signed char)-107;
unsigned short var_7 = (unsigned short)16497;
unsigned short var_9 = (unsigned short)36830;
_Bool var_10 = (_Bool)0;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)44577;
void init() {
}

void checksum() {
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
