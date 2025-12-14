#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1774;
int var_1 = -1205524311;
signed char var_2 = (signed char)117;
signed char var_7 = (signed char)-66;
unsigned int var_13 = 546686348U;
unsigned short var_14 = (unsigned short)35767;
int var_16 = -1336760414;
unsigned char var_17 = (unsigned char)106;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)103;
unsigned short var_22 = (unsigned short)36002;
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
