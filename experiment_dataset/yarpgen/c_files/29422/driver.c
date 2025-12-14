#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5115474516713457477LL;
long long int var_4 = 1836457673683412338LL;
long long int var_5 = -6969267802072279791LL;
unsigned int var_6 = 1845358465U;
unsigned char var_7 = (unsigned char)183;
int zero = 0;
unsigned char var_10 = (unsigned char)57;
long long int var_11 = -1703037184977858998LL;
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
