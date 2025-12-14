#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4012843295574236837LL;
long long int var_2 = -9120271300028228398LL;
unsigned long long int var_5 = 13704750145151628429ULL;
short var_7 = (short)7075;
unsigned long long int var_10 = 12482884987840154691ULL;
unsigned short var_16 = (unsigned short)46602;
int zero = 0;
long long int var_17 = 5627061501254031848LL;
unsigned short var_18 = (unsigned short)46890;
unsigned int var_19 = 2289434880U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
