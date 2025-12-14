#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -74197971;
unsigned long long int var_2 = 17014923085111122485ULL;
unsigned int var_3 = 3301022399U;
int var_5 = 605979621;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)48278;
unsigned long long int var_9 = 17114468197729368475ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_12 = 920818063;
int var_13 = 1081502692;
unsigned char var_14 = (unsigned char)53;
unsigned char var_15 = (unsigned char)161;
void init() {
}

void checksum() {
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
