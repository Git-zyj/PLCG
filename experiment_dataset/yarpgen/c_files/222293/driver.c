#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3789;
short var_3 = (short)-29020;
signed char var_4 = (signed char)-55;
short var_5 = (short)-27436;
unsigned char var_6 = (unsigned char)130;
unsigned long long int var_9 = 17758224972237614838ULL;
unsigned long long int var_14 = 8127323778981370346ULL;
int zero = 0;
unsigned int var_16 = 1635778591U;
short var_17 = (short)-4516;
short var_18 = (short)-2596;
unsigned long long int var_19 = 10809165623387605464ULL;
short var_20 = (short)12931;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
