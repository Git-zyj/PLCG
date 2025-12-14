#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5888017339087938745LL;
int var_18 = 832491189;
signed char var_19 = (signed char)98;
int zero = 0;
long long int var_20 = 318089461223221824LL;
long long int var_21 = 2909895651873731726LL;
int var_22 = -165696671;
void init() {
}

void checksum() {
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
