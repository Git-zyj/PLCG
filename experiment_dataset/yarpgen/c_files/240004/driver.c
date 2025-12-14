#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2525964440U;
unsigned char var_1 = (unsigned char)65;
unsigned long long int var_2 = 5017176488034201445ULL;
short var_3 = (short)14739;
signed char var_6 = (signed char)-33;
long long int var_7 = -7073397975592615565LL;
int zero = 0;
signed char var_10 = (signed char)17;
signed char var_11 = (signed char)-36;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
