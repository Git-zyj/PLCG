#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4174271449U;
unsigned char var_2 = (unsigned char)149;
long long int var_5 = -1554311904859866454LL;
long long int var_7 = -7718468456986572363LL;
long long int var_8 = 1046707311912873039LL;
int zero = 0;
signed char var_10 = (signed char)31;
unsigned short var_11 = (unsigned short)22120;
signed char var_12 = (signed char)26;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
