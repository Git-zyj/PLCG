#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)3919;
unsigned long long int var_4 = 13001417604516764063ULL;
unsigned short var_5 = (unsigned short)52893;
unsigned char var_6 = (unsigned char)181;
signed char var_8 = (signed char)46;
_Bool var_10 = (_Bool)1;
unsigned char var_14 = (unsigned char)85;
int zero = 0;
signed char var_16 = (signed char)-14;
signed char var_17 = (signed char)55;
unsigned long long int var_18 = 5469251936944419266ULL;
unsigned short var_19 = (unsigned short)42009;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
