#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49456;
signed char var_1 = (signed char)-82;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 3044901372672610159ULL;
long long int var_7 = -9170222329896032600LL;
unsigned short var_8 = (unsigned short)29122;
short var_9 = (short)25575;
unsigned int var_10 = 3094098049U;
int zero = 0;
unsigned short var_11 = (unsigned short)55684;
unsigned char var_12 = (unsigned char)13;
short var_13 = (short)-8458;
void init() {
}

void checksum() {
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
