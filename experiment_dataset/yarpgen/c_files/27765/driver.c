#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -9206807414214766229LL;
unsigned long long int var_9 = 11399221114788360658ULL;
long long int var_19 = -1740053726586943747LL;
int zero = 0;
unsigned char var_20 = (unsigned char)57;
long long int var_21 = 8564801323399492221LL;
void init() {
}

void checksum() {
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
