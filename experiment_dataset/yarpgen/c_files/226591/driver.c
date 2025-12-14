#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19863;
long long int var_1 = 3043588868564585715LL;
unsigned short var_2 = (unsigned short)19969;
unsigned int var_3 = 2880397000U;
short var_5 = (short)-20431;
long long int var_6 = -1823251801235351127LL;
unsigned short var_8 = (unsigned short)31204;
int zero = 0;
unsigned char var_11 = (unsigned char)199;
short var_12 = (short)14298;
unsigned long long int var_13 = 9345926735693342208ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
