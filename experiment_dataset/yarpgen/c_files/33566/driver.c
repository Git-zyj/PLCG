#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)28760;
short var_16 = (short)-13593;
long long int var_17 = 5616929654478836677LL;
int zero = 0;
short var_18 = (short)15783;
unsigned int var_19 = 4143904586U;
signed char var_20 = (signed char)109;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
