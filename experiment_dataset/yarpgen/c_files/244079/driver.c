#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)199;
unsigned char var_4 = (unsigned char)221;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-39;
unsigned char var_7 = (unsigned char)165;
signed char var_9 = (signed char)51;
_Bool var_10 = (_Bool)0;
unsigned char var_12 = (unsigned char)164;
int zero = 0;
int var_13 = 721556413;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
