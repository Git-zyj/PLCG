#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 976110231U;
int var_4 = 525516273;
long long int var_5 = -6819406313224403635LL;
unsigned short var_6 = (unsigned short)14429;
int var_7 = -450880123;
unsigned long long int var_9 = 9821954829180255136ULL;
signed char var_10 = (signed char)-70;
long long int var_11 = -1159980149606574053LL;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)25672;
int zero = 0;
unsigned short var_15 = (unsigned short)34577;
int var_16 = -1382857903;
unsigned long long int var_17 = 407549134667376706ULL;
signed char var_18 = (signed char)52;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
