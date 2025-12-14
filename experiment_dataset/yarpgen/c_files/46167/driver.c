#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-123;
unsigned char var_2 = (unsigned char)36;
int var_10 = -1520318461;
signed char var_14 = (signed char)85;
signed char var_15 = (signed char)78;
unsigned long long int var_16 = 14435313589770263495ULL;
int zero = 0;
unsigned long long int var_18 = 10259740087186200768ULL;
unsigned long long int var_19 = 10913481809790130954ULL;
int var_20 = -1299960657;
int var_21 = 1759811695;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
