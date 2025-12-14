#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 772617541;
unsigned long long int var_2 = 5256100659338307919ULL;
unsigned short var_5 = (unsigned short)24950;
unsigned int var_12 = 2691175474U;
unsigned char var_13 = (unsigned char)34;
long long int var_14 = -1719764667949512509LL;
unsigned long long int var_19 = 4889741065009138810ULL;
int zero = 0;
unsigned long long int var_20 = 3450446800623791792ULL;
int var_21 = -2008248994;
long long int var_22 = -7282323013555556334LL;
unsigned int var_23 = 2286733619U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
