#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5755679456899595109LL;
unsigned char var_6 = (unsigned char)186;
unsigned int var_11 = 397675817U;
int zero = 0;
signed char var_16 = (signed char)126;
unsigned long long int var_17 = 4189818852127858537ULL;
int var_18 = 1308418647;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
