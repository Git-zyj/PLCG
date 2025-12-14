#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-6;
int var_4 = -1520569445;
int var_5 = 1318523447;
int var_6 = 1348194391;
long long int var_7 = 8249255615147808138LL;
unsigned char var_8 = (unsigned char)182;
int zero = 0;
unsigned long long int var_11 = 9524123255641311852ULL;
long long int var_12 = -2487120292486198895LL;
unsigned int var_13 = 160405848U;
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
