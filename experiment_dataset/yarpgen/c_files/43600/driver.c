#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)1;
short var_3 = (short)9087;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)11341;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 3765380896U;
short var_13 = (short)-29279;
short var_15 = (short)25924;
unsigned int var_16 = 4221116380U;
short var_18 = (short)19843;
int zero = 0;
unsigned int var_20 = 1186777311U;
unsigned char var_21 = (unsigned char)241;
short var_22 = (short)-25087;
unsigned long long int var_23 = 9936289947993039450ULL;
signed char var_24 = (signed char)-47;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
