#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-14108;
unsigned long long int var_9 = 3372661249071229387ULL;
long long int var_10 = -4199183795264752563LL;
int var_14 = 1420255641;
unsigned int var_16 = 2537192228U;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3145311383U;
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
