#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1747495732;
int var_3 = 1416381703;
long long int var_4 = 5780426020901786584LL;
unsigned int var_9 = 3953800134U;
signed char var_11 = (signed char)-92;
long long int var_17 = 8069575621576513765LL;
unsigned char var_18 = (unsigned char)44;
int zero = 0;
long long int var_20 = 8744164011961681525LL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
