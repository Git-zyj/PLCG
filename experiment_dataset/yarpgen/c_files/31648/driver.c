#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1687947746;
long long int var_3 = -2534661378973745016LL;
signed char var_4 = (signed char)-76;
unsigned char var_5 = (unsigned char)45;
unsigned char var_8 = (unsigned char)84;
unsigned char var_11 = (unsigned char)43;
int zero = 0;
short var_18 = (short)32216;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
