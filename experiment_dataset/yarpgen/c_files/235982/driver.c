#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7921832188215678970LL;
unsigned int var_6 = 1281983425U;
unsigned int var_7 = 174104698U;
_Bool var_9 = (_Bool)1;
int var_10 = -1813388686;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_13 = 2391041183U;
int var_14 = -2019911906;
unsigned char var_15 = (unsigned char)138;
signed char var_16 = (signed char)-33;
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
