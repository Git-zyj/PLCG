#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 429627722574090785ULL;
unsigned int var_5 = 177770871U;
unsigned int var_8 = 3194519949U;
signed char var_12 = (signed char)105;
int zero = 0;
unsigned long long int var_13 = 227704176853070815ULL;
unsigned int var_14 = 989082397U;
unsigned char var_15 = (unsigned char)163;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
