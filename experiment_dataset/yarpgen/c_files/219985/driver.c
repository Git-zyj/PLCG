#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 337757538;
signed char var_4 = (signed char)108;
unsigned char var_6 = (unsigned char)119;
_Bool var_8 = (_Bool)1;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 2605057113U;
_Bool var_19 = (_Bool)0;
short var_20 = (short)11109;
signed char var_21 = (signed char)-72;
unsigned char var_22 = (unsigned char)248;
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
