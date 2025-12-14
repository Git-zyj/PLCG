#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_10 = 1023634125499065517LL;
long long int var_12 = -5369296544941564184LL;
long long int var_15 = -6295774150745304940LL;
long long int var_16 = 7931570546570620543LL;
int zero = 0;
long long int var_18 = 4481246400563150268LL;
long long int var_19 = 5458148540354705146LL;
_Bool var_20 = (_Bool)0;
long long int var_21 = -4040110069359638738LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
