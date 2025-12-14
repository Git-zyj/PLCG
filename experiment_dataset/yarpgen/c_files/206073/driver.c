#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7311210900364504489LL;
unsigned char var_7 = (unsigned char)148;
long long int var_15 = -8567009516926975951LL;
int zero = 0;
short var_19 = (short)-18709;
long long int var_20 = -2332501482993975813LL;
long long int var_21 = -8156771426984353101LL;
void init() {
}

void checksum() {
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
