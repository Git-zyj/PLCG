#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)45;
unsigned long long int var_2 = 470857720858011059ULL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 10127697506923282298ULL;
unsigned char var_8 = (unsigned char)222;
int zero = 0;
unsigned long long int var_10 = 15264688017798806916ULL;
short var_11 = (short)8678;
signed char var_12 = (signed char)-121;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
