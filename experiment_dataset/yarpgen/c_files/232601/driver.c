#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1416921758U;
unsigned long long int var_7 = 8266236059034576474ULL;
unsigned long long int var_8 = 4299181909534313442ULL;
int zero = 0;
unsigned long long int var_10 = 17088069942864025780ULL;
unsigned short var_11 = (unsigned short)1241;
unsigned char var_12 = (unsigned char)25;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
