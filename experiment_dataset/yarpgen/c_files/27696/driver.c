#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)13;
short var_8 = (short)-371;
unsigned char var_10 = (unsigned char)157;
int zero = 0;
long long int var_20 = -8594600596173094251LL;
long long int var_21 = -6976118707826244683LL;
short var_22 = (short)-9793;
short var_23 = (short)-18349;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
