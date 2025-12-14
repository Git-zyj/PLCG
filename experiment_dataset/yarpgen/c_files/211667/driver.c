#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-31226;
short var_4 = (short)-19683;
signed char var_8 = (signed char)-106;
unsigned int var_9 = 1986520994U;
long long int var_10 = -211445117276947538LL;
int zero = 0;
int var_15 = -1279319559;
unsigned char var_16 = (unsigned char)0;
long long int var_17 = -9214584299754838722LL;
int var_18 = 822867473;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
