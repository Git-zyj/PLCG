#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)8273;
unsigned short var_5 = (unsigned short)24622;
signed char var_9 = (signed char)-5;
unsigned int var_10 = 2711753210U;
int zero = 0;
int var_11 = -565117746;
int var_12 = -996830550;
long long int var_13 = -6201060772589574098LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
