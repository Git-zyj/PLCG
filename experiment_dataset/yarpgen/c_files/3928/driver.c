#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -6272621021757619844LL;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 2223122155U;
int zero = 0;
unsigned short var_18 = (unsigned short)53356;
unsigned int var_19 = 1595052563U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
