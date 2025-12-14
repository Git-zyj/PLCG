#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1142733029U;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 238465011U;
long long int var_5 = 8078550717882507518LL;
signed char var_6 = (signed char)-88;
long long int var_7 = 8379353332502309999LL;
unsigned int var_8 = 2297005045U;
unsigned int var_9 = 3972314287U;
int zero = 0;
unsigned long long int var_10 = 10226579507259223682ULL;
unsigned int var_11 = 2318956786U;
unsigned long long int var_12 = 12534055772640748268ULL;
unsigned long long int var_13 = 10135103331689802231ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
