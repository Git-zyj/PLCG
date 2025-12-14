#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 916379406461739746LL;
long long int var_7 = 3529409449810315555LL;
long long int var_10 = 5972016474039696828LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = -1147466328249547490LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
