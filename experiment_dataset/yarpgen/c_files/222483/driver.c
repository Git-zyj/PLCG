#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3494419764964264276ULL;
long long int var_5 = -1260527692624764299LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)82;
unsigned long long int var_16 = 4063414024490245625ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
