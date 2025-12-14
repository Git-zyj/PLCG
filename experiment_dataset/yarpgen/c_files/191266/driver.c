#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17876204834444085795ULL;
_Bool var_3 = (_Bool)0;
signed char var_12 = (signed char)-116;
int zero = 0;
unsigned long long int var_14 = 3644394338024053889ULL;
unsigned char var_15 = (unsigned char)109;
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
