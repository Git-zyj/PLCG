#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)31919;
unsigned long long int var_10 = 7982819409233447608ULL;
long long int var_11 = -8333585274231689914LL;
long long int var_13 = -5501817046532063439LL;
int zero = 0;
signed char var_16 = (signed char)72;
short var_17 = (short)-15932;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
