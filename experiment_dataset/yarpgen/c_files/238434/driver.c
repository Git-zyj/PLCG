#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 953523670U;
signed char var_1 = (signed char)-24;
int var_4 = 1438573822;
unsigned int var_5 = 4221855970U;
short var_6 = (short)-32541;
short var_7 = (short)16567;
signed char var_8 = (signed char)-1;
long long int var_9 = 283578624691453149LL;
short var_10 = (short)3975;
unsigned int var_11 = 116692296U;
short var_12 = (short)-16671;
int zero = 0;
short var_14 = (short)-16751;
signed char var_15 = (signed char)-93;
int var_16 = 971553874;
unsigned char var_17 = (unsigned char)65;
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
