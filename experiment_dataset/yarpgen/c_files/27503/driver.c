#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-69;
signed char var_4 = (signed char)-13;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned short var_10 = (unsigned short)28890;
long long int var_11 = -1501769246066756769LL;
unsigned int var_12 = 2781199220U;
signed char var_13 = (signed char)39;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
