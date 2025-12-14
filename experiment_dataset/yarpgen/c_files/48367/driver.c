#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3576380214101322620LL;
unsigned char var_1 = (unsigned char)211;
int var_2 = 2087462828;
unsigned int var_3 = 35478464U;
unsigned int var_10 = 2388499523U;
short var_11 = (short)-1739;
int zero = 0;
int var_12 = 1442324246;
int var_13 = -1265701080;
int var_14 = -233087415;
void init() {
}

void checksum() {
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
