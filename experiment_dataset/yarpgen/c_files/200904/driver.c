#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_6 = (unsigned char)18;
unsigned int var_7 = 537061024U;
unsigned int var_9 = 2232806245U;
signed char var_12 = (signed char)-32;
unsigned int var_14 = 3902805651U;
_Bool var_15 = (_Bool)1;
int var_18 = -1131354488;
unsigned long long int var_19 = 3334394250147221210ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)74;
long long int var_21 = 615023769112100420LL;
signed char var_22 = (signed char)-26;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
