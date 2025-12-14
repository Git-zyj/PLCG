#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1808819598;
int var_2 = -906016585;
unsigned int var_5 = 404298795U;
_Bool var_17 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)-45;
unsigned short var_19 = (unsigned short)4945;
unsigned int var_20 = 3068157534U;
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
