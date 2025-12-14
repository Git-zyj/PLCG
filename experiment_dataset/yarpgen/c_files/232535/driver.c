#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)95;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 17875759207912883413ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)189;
long long int var_12 = -8946665441697597670LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
