#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-84;
int var_9 = 466131642;
unsigned int var_11 = 1933941245U;
int zero = 0;
unsigned long long int var_16 = 18226773522199307263ULL;
long long int var_17 = 6115387991489887809LL;
signed char var_18 = (signed char)-115;
signed char var_19 = (signed char)-43;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
