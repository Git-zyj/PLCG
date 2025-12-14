#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8036976680879707031ULL;
unsigned long long int var_2 = 11593489369608826829ULL;
long long int var_3 = 2576253377924685375LL;
unsigned int var_4 = 3981229609U;
unsigned int var_6 = 475611545U;
long long int var_7 = -1090167534162288830LL;
unsigned int var_8 = 677448263U;
unsigned long long int var_9 = 12685890317372657899ULL;
unsigned long long int var_10 = 15698182095635758833ULL;
int zero = 0;
unsigned int var_11 = 2445112329U;
long long int var_12 = -349759907559394714LL;
unsigned int var_13 = 2727702073U;
long long int var_14 = -7783290706605697185LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
