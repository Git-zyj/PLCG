#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5456489060031251826LL;
long long int var_5 = 4405939396050120617LL;
unsigned int var_6 = 4162217517U;
unsigned int var_11 = 205872299U;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = 2024770978585520796LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
