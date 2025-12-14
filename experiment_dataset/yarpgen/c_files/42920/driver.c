#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52318;
unsigned int var_3 = 1725182975U;
unsigned char var_5 = (unsigned char)36;
_Bool var_6 = (_Bool)1;
int var_7 = -858679192;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 10572549691363515682ULL;
unsigned long long int var_11 = 253688696224304871ULL;
unsigned char var_12 = (unsigned char)45;
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
