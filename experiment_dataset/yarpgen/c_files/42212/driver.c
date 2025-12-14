#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-90;
unsigned char var_1 = (unsigned char)137;
signed char var_2 = (signed char)109;
int var_5 = -622110682;
int var_14 = -685420926;
int var_16 = -973677033;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = -8725316849962966368LL;
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
