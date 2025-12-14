#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)24081;
signed char var_5 = (signed char)-45;
_Bool var_6 = (_Bool)0;
long long int var_12 = -5306348898954552007LL;
unsigned char var_15 = (unsigned char)222;
long long int var_16 = -8039457879047169096LL;
int zero = 0;
unsigned char var_18 = (unsigned char)253;
signed char var_19 = (signed char)-15;
unsigned long long int var_20 = 5500943718056759475ULL;
short var_21 = (short)15307;
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
