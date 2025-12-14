#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46600;
signed char var_7 = (signed char)83;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
short var_12 = (short)2532;
signed char var_15 = (signed char)106;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 206576398U;
signed char var_20 = (signed char)124;
int var_21 = -348253318;
signed char var_22 = (signed char)-37;
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
