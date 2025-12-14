#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-118;
unsigned int var_2 = 476614962U;
signed char var_4 = (signed char)-55;
signed char var_7 = (signed char)75;
unsigned int var_14 = 784739858U;
int var_16 = 626823537;
_Bool var_18 = (_Bool)1;
int zero = 0;
short var_20 = (short)-7281;
unsigned int var_21 = 3874579326U;
unsigned long long int var_22 = 10294116932450786062ULL;
unsigned long long int var_23 = 2885764475271240699ULL;
int var_24 = 1535809583;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
