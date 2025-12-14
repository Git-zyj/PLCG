#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1727;
unsigned char var_2 = (unsigned char)20;
short var_3 = (short)21835;
int var_4 = 2007381651;
int var_5 = 520562225;
int zero = 0;
long long int var_13 = 5740663151315671393LL;
long long int var_14 = 3371221876282385363LL;
unsigned char var_15 = (unsigned char)103;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
