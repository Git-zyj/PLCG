#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)227;
int var_1 = -638852178;
long long int var_2 = -6010430427400371913LL;
unsigned long long int var_3 = 16290849047344584275ULL;
_Bool var_8 = (_Bool)0;
int zero = 0;
short var_15 = (short)7345;
unsigned char var_16 = (unsigned char)82;
unsigned long long int var_17 = 5489697694337866212ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
