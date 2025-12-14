#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4606269881255363163LL;
signed char var_7 = (signed char)-126;
signed char var_8 = (signed char)-45;
unsigned char var_11 = (unsigned char)241;
int zero = 0;
unsigned char var_18 = (unsigned char)156;
int var_19 = 533126201;
short var_20 = (short)-16715;
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
