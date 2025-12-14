#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2296889460484914192LL;
short var_3 = (short)30418;
long long int var_4 = 3773086260727631211LL;
unsigned short var_8 = (unsigned short)6210;
long long int var_10 = 6415977916021456422LL;
int zero = 0;
short var_17 = (short)27428;
int var_18 = 639913478;
long long int var_19 = -2269887799910773681LL;
signed char var_20 = (signed char)26;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
