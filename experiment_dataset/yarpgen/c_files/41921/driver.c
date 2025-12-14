#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16040;
unsigned short var_2 = (unsigned short)24726;
short var_5 = (short)17847;
long long int var_7 = 3533313285362847859LL;
_Bool var_9 = (_Bool)0;
short var_12 = (short)-13476;
int zero = 0;
short var_17 = (short)-28284;
unsigned char var_18 = (unsigned char)245;
unsigned char var_19 = (unsigned char)155;
signed char var_20 = (signed char)39;
void init() {
}

void checksum() {
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
