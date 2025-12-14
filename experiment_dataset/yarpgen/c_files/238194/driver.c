#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3248091314U;
signed char var_7 = (signed char)-45;
long long int var_12 = -9140936580726329178LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-27625;
signed char var_16 = (signed char)93;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
