#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_3 = -440288503;
unsigned char var_5 = (unsigned char)252;
_Bool var_6 = (_Bool)1;
long long int var_7 = -771254336451392289LL;
signed char var_9 = (signed char)77;
int zero = 0;
unsigned int var_11 = 2882150071U;
unsigned char var_12 = (unsigned char)163;
long long int var_13 = 1403080120483730814LL;
void init() {
}

void checksum() {
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
