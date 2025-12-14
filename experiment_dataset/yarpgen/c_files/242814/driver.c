#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6753386165955730767LL;
short var_5 = (short)30974;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_14 = -8763079029437881853LL;
unsigned short var_15 = (unsigned short)26182;
void init() {
}

void checksum() {
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
