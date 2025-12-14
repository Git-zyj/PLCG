#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -354004018;
unsigned int var_11 = 4266755005U;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 8107516369108402524ULL;
long long int var_20 = -2317774256582652759LL;
long long int var_21 = -2509615497403312665LL;
void init() {
}

void checksum() {
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
