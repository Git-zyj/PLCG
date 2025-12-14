#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8974870587881622842LL;
unsigned char var_9 = (unsigned char)235;
long long int var_11 = 935382142382526597LL;
int zero = 0;
long long int var_14 = 8341800072811109896LL;
signed char var_15 = (signed char)42;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
