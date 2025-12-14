#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1657235994442455700LL;
unsigned long long int var_3 = 12701461656210885907ULL;
long long int var_5 = -101823498054370562LL;
unsigned int var_6 = 2556900808U;
int var_8 = -527795420;
unsigned short var_9 = (unsigned short)50424;
int zero = 0;
short var_10 = (short)7545;
long long int var_11 = 4596038355546348168LL;
unsigned int var_12 = 410788576U;
unsigned int var_13 = 3913206749U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
