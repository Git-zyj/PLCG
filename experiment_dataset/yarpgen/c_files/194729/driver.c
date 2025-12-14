#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61045;
_Bool var_5 = (_Bool)1;
long long int var_12 = -6263254489634052265LL;
int var_13 = -990831705;
int var_16 = -781571529;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_19 = -8522995940250309029LL;
long long int var_20 = 3079933770210853358LL;
short var_21 = (short)-2328;
void init() {
}

void checksum() {
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
