#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12520;
unsigned long long int var_8 = 9559081687107242658ULL;
long long int var_11 = -6759255097715116511LL;
unsigned long long int var_13 = 3039402105343374361ULL;
unsigned char var_15 = (unsigned char)128;
int zero = 0;
unsigned long long int var_18 = 5151144374476151524ULL;
unsigned short var_19 = (unsigned short)27594;
void init() {
}

void checksum() {
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
