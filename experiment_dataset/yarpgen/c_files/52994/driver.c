#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 993659193;
unsigned int var_3 = 2995886413U;
signed char var_4 = (signed char)126;
_Bool var_6 = (_Bool)0;
long long int var_10 = -345884475514654155LL;
unsigned short var_12 = (unsigned short)58592;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)43;
int zero = 0;
unsigned char var_19 = (unsigned char)211;
long long int var_20 = 5934269739873800696LL;
unsigned long long int var_21 = 10411863824711772650ULL;
unsigned int var_22 = 3862176647U;
short var_23 = (short)8792;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
