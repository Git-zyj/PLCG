#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)67;
long long int var_5 = -8062663932802526141LL;
unsigned short var_6 = (unsigned short)17685;
int var_7 = 999671215;
unsigned char var_8 = (unsigned char)29;
int zero = 0;
long long int var_10 = -4221110499575327297LL;
unsigned int var_11 = 878009800U;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 713366318U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
