#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)7;
long long int var_2 = 5390521883602325084LL;
unsigned short var_6 = (unsigned short)34964;
signed char var_7 = (signed char)91;
long long int var_8 = -1810143332453477415LL;
_Bool var_12 = (_Bool)1;
int var_14 = -1173192966;
int zero = 0;
long long int var_16 = 7541850308766268075LL;
signed char var_17 = (signed char)-33;
short var_18 = (short)-10399;
short var_19 = (short)-31734;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
