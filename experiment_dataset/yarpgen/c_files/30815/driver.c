#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)189;
_Bool var_4 = (_Bool)0;
unsigned char var_11 = (unsigned char)189;
int zero = 0;
long long int var_20 = -2867765316527295000LL;
unsigned char var_21 = (unsigned char)191;
unsigned char var_22 = (unsigned char)47;
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
