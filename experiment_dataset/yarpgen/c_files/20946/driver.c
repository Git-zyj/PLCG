#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60383;
unsigned long long int var_2 = 12902015131716804394ULL;
int var_14 = 443078861;
int zero = 0;
unsigned long long int var_19 = 5228077094296371756ULL;
_Bool var_20 = (_Bool)1;
int var_21 = -1397924782;
unsigned short var_22 = (unsigned short)62904;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
