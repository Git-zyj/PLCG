#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7922120829348599760LL;
int var_6 = -1252186415;
signed char var_7 = (signed char)124;
int var_8 = -164386010;
signed char var_12 = (signed char)-123;
unsigned char var_13 = (unsigned char)27;
short var_15 = (short)2603;
int zero = 0;
unsigned short var_16 = (unsigned short)33593;
long long int var_17 = 5233152501717663608LL;
int var_18 = -871511297;
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
