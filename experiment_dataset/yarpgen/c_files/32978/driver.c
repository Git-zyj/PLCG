#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 8147076171595074988ULL;
unsigned long long int var_3 = 16845194467011255565ULL;
short var_5 = (short)5818;
short var_7 = (short)-11903;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_19 = (short)-31978;
short var_20 = (short)-23921;
unsigned short var_21 = (unsigned short)52251;
unsigned long long int var_22 = 18348454062084617102ULL;
int var_23 = 1680558296;
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
