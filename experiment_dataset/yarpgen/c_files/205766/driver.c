#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3018780762U;
int var_4 = 128503753;
unsigned char var_5 = (unsigned char)83;
signed char var_7 = (signed char)114;
unsigned int var_9 = 2743537586U;
unsigned char var_10 = (unsigned char)142;
signed char var_11 = (signed char)-5;
unsigned int var_12 = 4045672924U;
signed char var_13 = (signed char)0;
int zero = 0;
short var_14 = (short)-19731;
long long int var_15 = -1336897094508741081LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
