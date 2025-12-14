#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18359437847477774584ULL;
short var_2 = (short)21021;
long long int var_3 = 2426009768423187217LL;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 238766863U;
int zero = 0;
unsigned long long int var_11 = 1077020030317679961ULL;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
