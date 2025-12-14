#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)242;
signed char var_3 = (signed char)1;
signed char var_8 = (signed char)-114;
int zero = 0;
short var_19 = (short)-21599;
unsigned long long int var_20 = 9102359350796082313ULL;
int var_21 = 578262651;
signed char var_22 = (signed char)-126;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
