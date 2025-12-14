#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)249;
signed char var_1 = (signed char)-103;
unsigned char var_2 = (unsigned char)46;
unsigned long long int var_7 = 13641083648719965264ULL;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)34;
unsigned char var_13 = (unsigned char)1;
unsigned char var_14 = (unsigned char)12;
int zero = 0;
unsigned char var_15 = (unsigned char)139;
signed char var_16 = (signed char)97;
unsigned long long int var_17 = 11521878972532684372ULL;
void init() {
}

void checksum() {
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
