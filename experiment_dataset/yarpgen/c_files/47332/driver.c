#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16149;
unsigned long long int var_5 = 1875027641345448893ULL;
long long int var_6 = -4383134394360048222LL;
unsigned long long int var_8 = 10381645604992537951ULL;
long long int var_9 = 5356544449929831062LL;
int zero = 0;
signed char var_12 = (signed char)115;
long long int var_13 = 6418268534103566134LL;
void init() {
}

void checksum() {
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
