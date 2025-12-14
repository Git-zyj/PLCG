#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37158;
unsigned short var_3 = (unsigned short)57992;
int var_11 = 1416511605;
unsigned long long int var_14 = 2299743019893475447ULL;
signed char var_16 = (signed char)126;
int var_19 = -1627172736;
int zero = 0;
unsigned long long int var_20 = 11957052126663986755ULL;
unsigned char var_21 = (unsigned char)169;
void init() {
}

void checksum() {
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
