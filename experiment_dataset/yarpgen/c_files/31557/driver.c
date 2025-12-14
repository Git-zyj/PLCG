#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 5022284640861492334LL;
signed char var_2 = (signed char)77;
int var_8 = -707229014;
int var_9 = 720752276;
int var_10 = 1615020717;
int zero = 0;
unsigned long long int var_14 = 18367042887944714657ULL;
short var_15 = (short)3270;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
