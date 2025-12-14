#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-11;
short var_2 = (short)22484;
_Bool var_7 = (_Bool)0;
long long int var_14 = 6998075953340262219LL;
int zero = 0;
int var_19 = 684119999;
signed char var_20 = (signed char)-27;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
