#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45789;
signed char var_5 = (signed char)91;
signed char var_7 = (signed char)84;
unsigned int var_11 = 3808640392U;
int var_13 = 2033780772;
int zero = 0;
short var_19 = (short)11620;
unsigned long long int var_20 = 16208885097108801545ULL;
signed char var_21 = (signed char)-39;
long long int var_22 = -8199871804753679058LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
