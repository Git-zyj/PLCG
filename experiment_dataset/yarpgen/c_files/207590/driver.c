#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10546616226270190221ULL;
long long int var_5 = 2998006625162265108LL;
unsigned long long int var_6 = 3259044666558113918ULL;
unsigned int var_7 = 2554841710U;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 1095791530U;
int var_10 = 1379933768;
int zero = 0;
long long int var_14 = 855747305501024821LL;
unsigned char var_15 = (unsigned char)49;
unsigned int var_16 = 3824354794U;
unsigned int var_17 = 2488336166U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
