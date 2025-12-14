#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7312969309078091427LL;
long long int var_7 = -1161529053060506736LL;
long long int var_8 = 7649566489786170776LL;
long long int var_11 = 6606537216255888759LL;
long long int var_12 = -6832128761138884069LL;
long long int var_16 = -7415224294909043869LL;
int zero = 0;
long long int var_18 = 6675448298710764190LL;
long long int var_19 = 823602676128326240LL;
long long int var_20 = 1975015761239995011LL;
long long int var_21 = -2259019235041896989LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
