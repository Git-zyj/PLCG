#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)4145;
unsigned char var_5 = (unsigned char)94;
unsigned int var_7 = 109067610U;
long long int var_8 = 2159306960987769107LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = -397915585;
signed char var_15 = (signed char)-53;
void init() {
}

void checksum() {
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
