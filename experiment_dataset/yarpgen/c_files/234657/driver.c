#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-105;
signed char var_1 = (signed char)7;
int var_2 = -1267670879;
unsigned long long int var_3 = 7550357342588271102ULL;
signed char var_5 = (signed char)102;
unsigned int var_6 = 14527851U;
unsigned int var_8 = 1107779044U;
int zero = 0;
signed char var_13 = (signed char)-78;
unsigned int var_14 = 414972099U;
unsigned short var_15 = (unsigned short)59061;
unsigned int var_16 = 2740248142U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
