#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9045590630478660418ULL;
unsigned long long int var_2 = 1492749082024801981ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 3445522692U;
long long int var_18 = -6952825706712812632LL;
long long int var_19 = 5064496132097805513LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
