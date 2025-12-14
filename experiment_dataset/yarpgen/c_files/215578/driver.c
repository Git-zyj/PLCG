#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4621688497096920507LL;
long long int var_2 = -4541216857995423583LL;
signed char var_7 = (signed char)18;
long long int var_8 = 8950433004035106000LL;
int var_9 = 1398856121;
int var_11 = -438451600;
long long int var_12 = -5589761732427750658LL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 7265660119651905008ULL;
int var_15 = -296487057;
signed char var_16 = (signed char)119;
int zero = 0;
long long int var_18 = -4057576514950273255LL;
unsigned long long int var_19 = 548162415921429221ULL;
long long int var_20 = 4768353556073187768LL;
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
