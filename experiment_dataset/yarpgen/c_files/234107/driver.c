#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -3131754843284721753LL;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)94;
int zero = 0;
long long int var_16 = -5325354947817452817LL;
int var_17 = -867044613;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
