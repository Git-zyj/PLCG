#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1094663960U;
long long int var_4 = -5741776924943947354LL;
unsigned long long int var_5 = 6807612967319451105ULL;
unsigned long long int var_12 = 17111498998209970791ULL;
int zero = 0;
long long int var_20 = 4901484842236637885LL;
int var_21 = 1803361016;
signed char var_22 = (signed char)18;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
