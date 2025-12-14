#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3169212942724888051LL;
_Bool var_13 = (_Bool)1;
int var_18 = 767657772;
int zero = 0;
unsigned char var_19 = (unsigned char)109;
unsigned long long int var_20 = 17831465247544304110ULL;
int var_21 = -1401313830;
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
