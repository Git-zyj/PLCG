#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1792200028U;
_Bool var_3 = (_Bool)0;
unsigned short var_6 = (unsigned short)51348;
unsigned int var_8 = 4147095861U;
int var_10 = 952247635;
int zero = 0;
short var_12 = (short)-23159;
short var_13 = (short)4484;
unsigned char var_14 = (unsigned char)224;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
