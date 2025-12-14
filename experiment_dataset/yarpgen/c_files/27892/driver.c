#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5447532667468487250ULL;
int var_1 = -519172736;
unsigned short var_4 = (unsigned short)49585;
int var_7 = -1952118875;
unsigned int var_8 = 2473995406U;
long long int var_9 = -7258944133335723328LL;
unsigned long long int var_13 = 13038702412478847828ULL;
signed char var_15 = (signed char)49;
int zero = 0;
unsigned long long int var_17 = 10887376712680608204ULL;
int var_18 = 949044254;
unsigned short var_19 = (unsigned short)30342;
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
