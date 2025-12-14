#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-100;
unsigned short var_1 = (unsigned short)55359;
unsigned long long int var_4 = 5485552163975213299ULL;
signed char var_6 = (signed char)-17;
unsigned short var_7 = (unsigned short)28766;
unsigned char var_8 = (unsigned char)216;
unsigned int var_10 = 2548106578U;
unsigned short var_11 = (unsigned short)27247;
int zero = 0;
unsigned int var_14 = 1828676588U;
long long int var_15 = 878044670366767066LL;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)76;
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
