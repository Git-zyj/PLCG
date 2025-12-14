#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1975618945;
long long int var_3 = 3269138121618706868LL;
unsigned char var_5 = (unsigned char)208;
long long int var_7 = -5695672624109905102LL;
int zero = 0;
unsigned int var_20 = 2667921322U;
long long int var_21 = -6431548816565690975LL;
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
