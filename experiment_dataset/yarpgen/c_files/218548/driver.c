#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19815;
unsigned char var_1 = (unsigned char)141;
long long int var_3 = 8243626217841978365LL;
signed char var_6 = (signed char)105;
unsigned short var_13 = (unsigned short)19015;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)-59;
unsigned int var_20 = 3641485039U;
unsigned short var_21 = (unsigned short)6068;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
