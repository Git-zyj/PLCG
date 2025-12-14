#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 775200700U;
signed char var_1 = (signed char)15;
long long int var_2 = 7435390317187409615LL;
unsigned long long int var_5 = 6507513488533433321ULL;
long long int var_9 = -4457591746789232484LL;
signed char var_10 = (signed char)-66;
unsigned short var_11 = (unsigned short)5053;
signed char var_13 = (signed char)17;
unsigned int var_16 = 2627363213U;
int zero = 0;
short var_17 = (short)-3170;
long long int var_18 = -2034050066183879998LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
