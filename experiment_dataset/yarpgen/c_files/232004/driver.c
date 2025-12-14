#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 906768104U;
short var_2 = (short)-19599;
int var_3 = 1620846466;
unsigned int var_4 = 4172972587U;
signed char var_5 = (signed char)-57;
unsigned long long int var_6 = 16718952616934711325ULL;
unsigned int var_7 = 4069677730U;
long long int var_9 = 7794689242510060612LL;
unsigned short var_10 = (unsigned short)4425;
unsigned short var_11 = (unsigned short)59674;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)75;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-19050;
short var_16 = (short)-24172;
unsigned int var_17 = 3427456413U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
