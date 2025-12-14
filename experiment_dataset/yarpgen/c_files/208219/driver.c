#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_6 = -47889079;
long long int var_9 = 8017389409260816096LL;
int zero = 0;
unsigned long long int var_11 = 2577250996577816386ULL;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)61325;
long long int var_14 = 5456852015997249079LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
