#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)250;
long long int var_1 = -8487601330123102225LL;
unsigned int var_2 = 2062098678U;
signed char var_4 = (signed char)50;
short var_5 = (short)-27415;
signed char var_8 = (signed char)-83;
long long int var_11 = 2232613624177096281LL;
_Bool var_13 = (_Bool)0;
long long int var_14 = -6322074112543878280LL;
int zero = 0;
short var_15 = (short)-27256;
int var_16 = 540511996;
void init() {
}

void checksum() {
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
