#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5389090314032649155LL;
unsigned int var_2 = 3977696660U;
int var_10 = 2064917222;
int var_13 = -337666002;
long long int var_14 = 6994208738879620104LL;
unsigned int var_15 = 3350334700U;
int var_16 = -325234206;
int zero = 0;
unsigned char var_18 = (unsigned char)68;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)54007;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
