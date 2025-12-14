#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)12764;
long long int var_3 = -3967250733180391960LL;
unsigned short var_5 = (unsigned short)9284;
unsigned char var_6 = (unsigned char)80;
int zero = 0;
unsigned char var_11 = (unsigned char)238;
unsigned long long int var_12 = 11690668026531421581ULL;
short var_13 = (short)13835;
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
