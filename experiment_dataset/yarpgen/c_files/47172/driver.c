#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)137;
unsigned long long int var_5 = 17106621021921541055ULL;
unsigned long long int var_7 = 10933928924523139817ULL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 11109231781371009121ULL;
unsigned int var_11 = 382671811U;
int zero = 0;
unsigned int var_13 = 1868557290U;
unsigned char var_14 = (unsigned char)70;
short var_15 = (short)11542;
unsigned short var_16 = (unsigned short)29508;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
