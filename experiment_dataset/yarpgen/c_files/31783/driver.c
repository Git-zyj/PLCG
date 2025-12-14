#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14846897549812276096ULL;
long long int var_7 = -7914729236557867253LL;
int var_8 = -708831688;
unsigned long long int var_9 = 11562488940887162640ULL;
long long int var_10 = 2604727420338821520LL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_12 = (unsigned short)38647;
long long int var_13 = 8820571694797480955LL;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-7294;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
