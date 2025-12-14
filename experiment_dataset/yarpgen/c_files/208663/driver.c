#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-15;
unsigned long long int var_4 = 7535390105559883660ULL;
signed char var_6 = (signed char)102;
signed char var_7 = (signed char)107;
unsigned int var_9 = 2636286871U;
unsigned int var_10 = 940329667U;
signed char var_11 = (signed char)53;
unsigned int var_12 = 3050536066U;
int zero = 0;
long long int var_13 = -5828091844604551167LL;
unsigned int var_14 = 1036653325U;
long long int var_15 = -5750194457777810710LL;
void init() {
}

void checksum() {
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
