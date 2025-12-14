#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -621274007;
long long int var_3 = -7939386066801822864LL;
short var_5 = (short)-30768;
int var_10 = -721507623;
long long int var_12 = 5585729943618613593LL;
signed char var_14 = (signed char)-121;
int zero = 0;
unsigned char var_15 = (unsigned char)115;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
