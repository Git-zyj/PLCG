#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)38;
unsigned char var_3 = (unsigned char)18;
unsigned short var_5 = (unsigned short)7783;
short var_8 = (short)7584;
long long int var_15 = 1123570664193263135LL;
unsigned int var_17 = 1230253499U;
int zero = 0;
signed char var_18 = (signed char)-55;
signed char var_19 = (signed char)53;
unsigned int var_20 = 1177065844U;
unsigned short var_21 = (unsigned short)44408;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
