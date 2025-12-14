#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3649901538U;
unsigned char var_5 = (unsigned char)181;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = -9054380206872984579LL;
short var_12 = (short)25559;
unsigned long long int var_13 = 3009400405383538191ULL;
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
