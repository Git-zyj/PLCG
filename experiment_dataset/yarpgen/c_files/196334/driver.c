#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)61749;
_Bool var_5 = (_Bool)1;
unsigned short var_9 = (unsigned short)59583;
unsigned long long int var_10 = 5320769972844953697ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_18 = 974914054;
unsigned long long int var_19 = 884731675911482603ULL;
unsigned short var_20 = (unsigned short)16268;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
