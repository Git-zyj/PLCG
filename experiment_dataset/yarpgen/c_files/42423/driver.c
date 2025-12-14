#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1324928882;
unsigned long long int var_7 = 13847953308428272127ULL;
unsigned char var_13 = (unsigned char)254;
unsigned char var_15 = (unsigned char)6;
unsigned short var_17 = (unsigned short)26200;
int zero = 0;
signed char var_18 = (signed char)42;
signed char var_19 = (signed char)-1;
long long int var_20 = 937109114752961325LL;
_Bool var_21 = (_Bool)1;
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
