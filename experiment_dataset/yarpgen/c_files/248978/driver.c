#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28821;
signed char var_2 = (signed char)-69;
long long int var_6 = 9089608211927607787LL;
short var_7 = (short)16170;
long long int var_8 = 2565693526070963604LL;
signed char var_9 = (signed char)12;
signed char var_11 = (signed char)-54;
short var_12 = (short)4145;
int zero = 0;
short var_16 = (short)30510;
long long int var_17 = -3726460545503235611LL;
short var_18 = (short)-20072;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
