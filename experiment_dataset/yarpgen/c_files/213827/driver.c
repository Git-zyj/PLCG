#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10849354129859706437ULL;
long long int var_2 = -3701544723823936911LL;
long long int var_4 = 3640725815188187342LL;
int zero = 0;
unsigned long long int var_12 = 2059547549662231658ULL;
unsigned short var_13 = (unsigned short)64410;
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
