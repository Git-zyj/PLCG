#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7205641531070139001LL;
unsigned short var_3 = (unsigned short)53300;
unsigned char var_6 = (unsigned char)226;
short var_8 = (short)-14697;
unsigned long long int var_9 = 2082624717943325221ULL;
long long int var_12 = 6030269578650660584LL;
int zero = 0;
unsigned long long int var_16 = 17591749699004345023ULL;
signed char var_17 = (signed char)-88;
short var_18 = (short)-2168;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
