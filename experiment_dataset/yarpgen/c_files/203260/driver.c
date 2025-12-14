#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -943147647;
unsigned long long int var_2 = 357175666659040040ULL;
signed char var_4 = (signed char)-89;
unsigned long long int var_6 = 16038821872416377414ULL;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)63;
short var_17 = (short)11025;
int zero = 0;
unsigned char var_18 = (unsigned char)244;
unsigned char var_19 = (unsigned char)208;
unsigned char var_20 = (unsigned char)100;
unsigned char var_21 = (unsigned char)106;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
