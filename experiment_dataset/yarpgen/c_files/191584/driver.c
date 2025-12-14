#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 605848414U;
_Bool var_2 = (_Bool)0;
unsigned char var_6 = (unsigned char)51;
unsigned char var_7 = (unsigned char)163;
unsigned int var_8 = 2331664946U;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
int zero = 0;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)24745;
unsigned long long int var_14 = 7299753750715376275ULL;
signed char var_15 = (signed char)2;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
