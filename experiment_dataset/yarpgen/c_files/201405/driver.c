#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)41;
unsigned long long int var_2 = 5124851837983547942ULL;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)17583;
unsigned char var_5 = (unsigned char)27;
unsigned short var_6 = (unsigned short)65293;
unsigned long long int var_8 = 4308312502711644506ULL;
unsigned int var_10 = 1277962252U;
long long int var_12 = 2138079365414602289LL;
unsigned short var_14 = (unsigned short)20489;
int zero = 0;
int var_17 = -2036516272;
unsigned int var_18 = 2887857378U;
unsigned long long int var_19 = 12827054687946802774ULL;
unsigned long long int var_20 = 2704952251799921553ULL;
unsigned long long int var_21 = 4423787654820655287ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
