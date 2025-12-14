#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14868475898585268709ULL;
_Bool var_3 = (_Bool)1;
short var_4 = (short)6401;
short var_5 = (short)-27201;
long long int var_7 = -2845925664981851935LL;
short var_9 = (short)11933;
long long int var_11 = 5628627835988293851LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 12561995038743608560ULL;
signed char var_19 = (signed char)-114;
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
