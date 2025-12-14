#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)60;
signed char var_5 = (signed char)-92;
int var_7 = 99259949;
long long int var_9 = -5082616329631379496LL;
_Bool var_10 = (_Bool)0;
int var_11 = 449588759;
unsigned short var_12 = (unsigned short)52009;
int zero = 0;
int var_13 = 756968530;
short var_14 = (short)-31404;
signed char var_15 = (signed char)70;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
