#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58152;
signed char var_1 = (signed char)-18;
_Bool var_3 = (_Bool)1;
unsigned char var_6 = (unsigned char)235;
long long int var_12 = 4891320729874777848LL;
int var_16 = -2033002645;
unsigned long long int var_18 = 13841476410533524964ULL;
int zero = 0;
int var_20 = -1898919679;
signed char var_21 = (signed char)-112;
unsigned char var_22 = (unsigned char)197;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
