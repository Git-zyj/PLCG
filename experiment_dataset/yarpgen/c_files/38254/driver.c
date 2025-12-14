#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)131;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)1;
long long int var_8 = 8469186489162645590LL;
int var_9 = 1331321775;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -4821650709049411932LL;
_Bool var_12 = (_Bool)0;
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
