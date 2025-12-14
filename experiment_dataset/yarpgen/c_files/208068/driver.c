#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)120;
signed char var_5 = (signed char)99;
signed char var_7 = (signed char)-121;
unsigned char var_8 = (unsigned char)13;
int zero = 0;
unsigned int var_10 = 3023523345U;
unsigned short var_11 = (unsigned short)9645;
long long int var_12 = -3287199723462663244LL;
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
