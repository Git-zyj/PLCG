#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 925568366U;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)59128;
int var_17 = 326862183;
int zero = 0;
unsigned long long int var_18 = 11820256173648602565ULL;
long long int var_19 = 9059979915784935222LL;
signed char var_20 = (signed char)53;
unsigned short var_21 = (unsigned short)20400;
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
