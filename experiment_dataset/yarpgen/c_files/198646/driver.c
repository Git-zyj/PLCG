#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_6 = (short)13952;
signed char var_8 = (signed char)-95;
short var_9 = (short)30880;
unsigned short var_10 = (unsigned short)4331;
unsigned char var_11 = (unsigned char)36;
long long int var_13 = 6032116585947928773LL;
int zero = 0;
unsigned char var_16 = (unsigned char)30;
unsigned short var_17 = (unsigned short)6444;
short var_18 = (short)-29188;
unsigned long long int var_19 = 1777404479509201375ULL;
short var_20 = (short)13835;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
