#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4997322467776410651ULL;
unsigned int var_5 = 880728351U;
unsigned long long int var_7 = 16820188883963460526ULL;
unsigned short var_8 = (unsigned short)8462;
int zero = 0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 1288513828U;
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
