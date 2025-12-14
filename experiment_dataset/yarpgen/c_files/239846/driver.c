#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -1756128674;
signed char var_9 = (signed char)-4;
int zero = 0;
unsigned long long int var_19 = 18172146088046442220ULL;
signed char var_20 = (signed char)-67;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-78;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
