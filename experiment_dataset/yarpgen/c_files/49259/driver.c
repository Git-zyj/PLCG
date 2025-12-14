#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)222;
long long int var_2 = 5688668798850819075LL;
unsigned int var_3 = 3514138891U;
long long int var_10 = 678355243237653768LL;
int zero = 0;
unsigned long long int var_17 = 7696724060790805807ULL;
long long int var_18 = -2720267075193209459LL;
long long int var_19 = -5626355890858803395LL;
long long int var_20 = 5497011525426744186LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
