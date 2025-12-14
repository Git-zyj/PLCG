#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1492095465;
unsigned short var_15 = (unsigned short)6087;
int zero = 0;
long long int var_20 = 3118925738179471886LL;
unsigned long long int var_21 = 9628168396706347303ULL;
unsigned int var_22 = 3409923326U;
void init() {
}

void checksum() {
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
