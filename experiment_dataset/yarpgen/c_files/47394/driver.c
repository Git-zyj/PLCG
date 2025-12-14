#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4205174552614248165LL;
int var_2 = -1995435124;
unsigned char var_6 = (unsigned char)230;
int var_8 = 1047844310;
int zero = 0;
short var_18 = (short)20134;
long long int var_19 = 3312530581564696344LL;
short var_20 = (short)-11549;
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
