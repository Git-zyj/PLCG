#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)65182;
unsigned short var_1 = (unsigned short)55838;
unsigned int var_2 = 389955909U;
long long int var_3 = 2959143057285897545LL;
unsigned short var_8 = (unsigned short)41704;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)145;
int zero = 0;
unsigned char var_12 = (unsigned char)41;
long long int var_13 = -6105170934967634696LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
