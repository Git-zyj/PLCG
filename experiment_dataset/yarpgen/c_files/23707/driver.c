#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)58404;
long long int var_5 = -561647100540322102LL;
signed char var_6 = (signed char)85;
unsigned short var_9 = (unsigned short)31249;
int zero = 0;
long long int var_10 = -7001847612712748306LL;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)33628;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
