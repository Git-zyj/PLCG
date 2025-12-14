#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -623210465024322451LL;
signed char var_4 = (signed char)-107;
unsigned short var_6 = (unsigned short)2060;
unsigned char var_9 = (unsigned char)149;
int var_12 = -1171884725;
unsigned short var_16 = (unsigned short)9648;
int zero = 0;
int var_20 = 779867422;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
