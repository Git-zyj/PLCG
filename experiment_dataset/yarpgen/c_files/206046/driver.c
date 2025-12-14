#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)72;
unsigned int var_1 = 1597558908U;
long long int var_2 = 8416450771057986395LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_17 = -222104293;
unsigned long long int var_18 = 17653194047974421758ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
