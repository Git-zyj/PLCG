#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27130;
unsigned char var_4 = (unsigned char)75;
unsigned int var_6 = 2838974771U;
unsigned int var_10 = 3360453186U;
_Bool var_11 = (_Bool)1;
_Bool var_13 = (_Bool)1;
signed char var_15 = (signed char)-37;
int zero = 0;
unsigned int var_16 = 1772102934U;
_Bool var_17 = (_Bool)0;
int var_18 = 1005597038;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
