#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)19;
signed char var_3 = (signed char)-121;
unsigned int var_5 = 4050362911U;
_Bool var_6 = (_Bool)0;
unsigned int var_9 = 88046157U;
long long int var_12 = -1756920406506228697LL;
int zero = 0;
int var_14 = 1567897996;
unsigned char var_15 = (unsigned char)44;
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
