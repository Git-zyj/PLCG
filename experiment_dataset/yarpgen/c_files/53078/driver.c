#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1491184475;
unsigned short var_3 = (unsigned short)55816;
unsigned char var_4 = (unsigned char)206;
signed char var_5 = (signed char)-88;
short var_6 = (short)22045;
long long int var_7 = 5810133915874884037LL;
unsigned char var_8 = (unsigned char)40;
unsigned int var_10 = 2939151874U;
int zero = 0;
unsigned short var_11 = (unsigned short)50996;
short var_12 = (short)14358;
_Bool var_13 = (_Bool)0;
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
