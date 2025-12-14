#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17278;
int var_1 = -1853929216;
unsigned long long int var_2 = 10007256138169816660ULL;
int var_3 = 19055078;
unsigned short var_5 = (unsigned short)65304;
short var_7 = (short)20543;
unsigned char var_8 = (unsigned char)196;
signed char var_9 = (signed char)79;
long long int var_10 = -6338459284694057661LL;
int zero = 0;
long long int var_12 = 4839656927933452038LL;
unsigned char var_13 = (unsigned char)255;
unsigned short var_14 = (unsigned short)33434;
short var_15 = (short)-15280;
signed char var_16 = (signed char)-28;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
