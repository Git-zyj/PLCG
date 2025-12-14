#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45755;
int var_1 = -536952947;
unsigned char var_2 = (unsigned char)201;
unsigned char var_3 = (unsigned char)98;
long long int var_4 = -3294616652530577295LL;
unsigned short var_5 = (unsigned short)34365;
int zero = 0;
unsigned short var_11 = (unsigned short)55051;
unsigned short var_12 = (unsigned short)3091;
unsigned int var_13 = 3405669779U;
long long int var_14 = 1859983839960287709LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
