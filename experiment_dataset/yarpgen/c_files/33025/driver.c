#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1173;
unsigned char var_2 = (unsigned char)62;
int var_3 = -1038493595;
unsigned int var_4 = 1407710397U;
unsigned long long int var_5 = 3941232212204811678ULL;
unsigned char var_9 = (unsigned char)101;
_Bool var_12 = (_Bool)0;
int var_14 = 1704235356;
int zero = 0;
int var_18 = -1753891774;
short var_19 = (short)-10753;
long long int var_20 = -4033759325931571044LL;
long long int var_21 = -7460929240064188969LL;
void init() {
}

void checksum() {
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
