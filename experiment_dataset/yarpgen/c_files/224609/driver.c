#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4353238208798692585LL;
int var_2 = -958083829;
int var_10 = -716561265;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 2936482136U;
unsigned int var_21 = 4259079228U;
unsigned int var_22 = 2175868702U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
