#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1161189486U;
unsigned long long int var_5 = 15194839513104054074ULL;
_Bool var_7 = (_Bool)1;
int var_8 = 266868420;
unsigned int var_9 = 1149913696U;
unsigned int var_17 = 3787887054U;
int zero = 0;
long long int var_18 = 5079047722485817193LL;
unsigned long long int var_19 = 13754705166201960943ULL;
signed char var_20 = (signed char)76;
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
