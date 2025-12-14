#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)14768;
unsigned long long int var_2 = 17793215011641670986ULL;
int var_4 = -316006971;
unsigned char var_6 = (unsigned char)61;
int var_10 = 690906314;
int zero = 0;
unsigned char var_11 = (unsigned char)78;
unsigned char var_12 = (unsigned char)69;
unsigned int var_13 = 3184331980U;
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
