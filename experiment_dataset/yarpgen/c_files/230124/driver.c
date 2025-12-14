#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 2999167132009336563LL;
int var_11 = 401864569;
long long int var_13 = 3773656620956058159LL;
long long int var_14 = -7210941356193155892LL;
unsigned short var_15 = (unsigned short)37395;
int zero = 0;
short var_17 = (short)-20510;
int var_18 = 1748975985;
unsigned char var_19 = (unsigned char)181;
void init() {
}

void checksum() {
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
