#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6043261727481517452LL;
unsigned int var_10 = 2773143308U;
short var_11 = (short)3018;
int zero = 0;
unsigned int var_18 = 756164832U;
long long int var_19 = -7057078221313918316LL;
unsigned char var_20 = (unsigned char)135;
void init() {
}

void checksum() {
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
