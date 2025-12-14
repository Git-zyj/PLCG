#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)19;
signed char var_1 = (signed char)-58;
signed char var_2 = (signed char)34;
_Bool var_4 = (_Bool)1;
unsigned int var_9 = 3833434298U;
long long int var_13 = 8226635455378377284LL;
int zero = 0;
signed char var_18 = (signed char)-59;
short var_19 = (short)22323;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
