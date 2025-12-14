#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2000358438;
_Bool var_3 = (_Bool)0;
short var_4 = (short)8774;
unsigned long long int var_5 = 689433923894641299ULL;
_Bool var_6 = (_Bool)0;
_Bool var_10 = (_Bool)1;
int var_11 = 825812463;
unsigned long long int var_12 = 6276079203291378997ULL;
unsigned char var_14 = (unsigned char)170;
int zero = 0;
unsigned char var_20 = (unsigned char)4;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
