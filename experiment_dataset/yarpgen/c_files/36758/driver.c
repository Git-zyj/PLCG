#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-15360;
long long int var_3 = -4169585417236599922LL;
signed char var_6 = (signed char)38;
unsigned long long int var_8 = 5689096774795066474ULL;
unsigned long long int var_10 = 5229960425841829554ULL;
int zero = 0;
int var_13 = -1555992755;
unsigned long long int var_14 = 883784952459642355ULL;
int var_15 = 1528815543;
signed char var_16 = (signed char)-89;
unsigned int var_17 = 2443366887U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
