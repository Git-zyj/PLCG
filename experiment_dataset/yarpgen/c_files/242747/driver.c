#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5069778599027159078LL;
long long int var_1 = -6240218377268825743LL;
signed char var_2 = (signed char)-103;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 3603295249U;
signed char var_7 = (signed char)56;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-14705;
int zero = 0;
int var_14 = 1236469570;
short var_15 = (short)9625;
short var_16 = (short)-27820;
long long int var_17 = -1420482966772640823LL;
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
