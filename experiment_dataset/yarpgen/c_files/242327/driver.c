#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)120;
long long int var_2 = -3140044690796435790LL;
long long int var_3 = -830750748164137715LL;
unsigned char var_6 = (unsigned char)79;
signed char var_8 = (signed char)-83;
long long int var_11 = 5734635100749700195LL;
unsigned char var_13 = (unsigned char)169;
signed char var_14 = (signed char)-82;
int zero = 0;
signed char var_15 = (signed char)-42;
unsigned char var_16 = (unsigned char)129;
long long int var_17 = -2132703116720825659LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
