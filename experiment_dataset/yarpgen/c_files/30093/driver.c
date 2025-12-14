#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15033566847933943782ULL;
unsigned char var_1 = (unsigned char)234;
short var_2 = (short)-31399;
unsigned int var_7 = 82431709U;
unsigned short var_9 = (unsigned short)46341;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)6;
int var_12 = -341726961;
signed char var_13 = (signed char)6;
long long int var_14 = -58944343603641125LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
