#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8588684024987361507LL;
unsigned short var_1 = (unsigned short)13599;
long long int var_4 = -3008659097637103426LL;
unsigned int var_7 = 736642757U;
int var_8 = 1818118650;
unsigned short var_10 = (unsigned short)9191;
int var_11 = -1035087465;
unsigned long long int var_12 = 5077005677110079572ULL;
unsigned short var_13 = (unsigned short)41702;
_Bool var_15 = (_Bool)0;
int zero = 0;
int var_17 = -1965513573;
unsigned long long int var_18 = 2906704018392436099ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
