#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 8354257887568870763LL;
unsigned long long int var_12 = 5062143900229591704ULL;
signed char var_16 = (signed char)98;
int zero = 0;
signed char var_17 = (signed char)-87;
unsigned int var_18 = 3437777691U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
