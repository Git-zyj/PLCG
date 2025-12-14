#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = -4689263072568827314LL;
unsigned long long int var_15 = 4901326745294504337ULL;
long long int var_16 = -7752336954714627386LL;
int zero = 0;
long long int var_18 = -1211788099767089000LL;
long long int var_19 = -487419401304044267LL;
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
