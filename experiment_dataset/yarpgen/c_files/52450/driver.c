#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26640;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)96;
signed char var_5 = (signed char)78;
unsigned int var_6 = 3458392988U;
unsigned long long int var_7 = 5524405149347141012ULL;
short var_9 = (short)14861;
unsigned char var_15 = (unsigned char)142;
long long int var_16 = 7064292671296979844LL;
int zero = 0;
unsigned int var_17 = 1237979928U;
unsigned int var_18 = 4089845401U;
long long int var_19 = -1004108862989999465LL;
signed char var_20 = (signed char)69;
unsigned char var_21 = (unsigned char)128;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
