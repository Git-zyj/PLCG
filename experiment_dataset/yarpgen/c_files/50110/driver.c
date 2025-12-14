#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)13855;
long long int var_6 = 5487404271224024699LL;
long long int var_8 = -7941367856789524929LL;
int zero = 0;
long long int var_11 = 1386923140698951988LL;
long long int var_12 = 4950183100004885019LL;
_Bool var_13 = (_Bool)0;
long long int var_14 = -6170279820291920688LL;
long long int var_15 = -2536131342010733257LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
