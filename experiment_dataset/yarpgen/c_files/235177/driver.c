#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)2117;
unsigned short var_4 = (unsigned short)29702;
int var_5 = 685563788;
unsigned short var_10 = (unsigned short)8011;
int zero = 0;
unsigned short var_19 = (unsigned short)1323;
short var_20 = (short)-19016;
unsigned long long int var_21 = 13906179635322527448ULL;
void init() {
}

void checksum() {
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
