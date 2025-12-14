#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4011803596U;
_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)-76;
int var_5 = 487803886;
short var_6 = (short)29434;
unsigned char var_9 = (unsigned char)49;
unsigned long long int var_10 = 3012371935386529894ULL;
short var_12 = (short)21420;
unsigned char var_13 = (unsigned char)189;
int zero = 0;
long long int var_17 = 4877434035015361370LL;
short var_18 = (short)11059;
void init() {
}

void checksum() {
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
