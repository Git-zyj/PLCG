#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5633344699549145415ULL;
unsigned char var_2 = (unsigned char)14;
_Bool var_6 = (_Bool)0;
int var_9 = -811122042;
int zero = 0;
long long int var_10 = 2738755472515071480LL;
long long int var_11 = -2151385757867134020LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
