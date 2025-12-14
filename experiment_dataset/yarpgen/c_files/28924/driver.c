#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_12 = (_Bool)0;
unsigned long long int var_19 = 7465167973745181144ULL;
int zero = 0;
unsigned int var_20 = 2970390894U;
long long int var_21 = 1044986012281455294LL;
unsigned short var_22 = (unsigned short)38226;
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
