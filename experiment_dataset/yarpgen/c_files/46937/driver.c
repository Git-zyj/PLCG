#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13440151784893206629ULL;
unsigned char var_1 = (unsigned char)86;
unsigned char var_2 = (unsigned char)101;
unsigned int var_3 = 2680570094U;
long long int var_4 = 4453321687140509794LL;
unsigned short var_8 = (unsigned short)33222;
unsigned long long int var_9 = 9832596118970407930ULL;
int zero = 0;
int var_10 = 1180076021;
unsigned long long int var_11 = 5837800918547803466ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
