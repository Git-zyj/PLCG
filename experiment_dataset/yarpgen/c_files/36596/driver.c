#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5187320511992952329LL;
short var_1 = (short)15291;
unsigned char var_4 = (unsigned char)83;
int var_8 = 1340625177;
_Bool var_10 = (_Bool)0;
unsigned short var_12 = (unsigned short)53285;
int zero = 0;
unsigned char var_17 = (unsigned char)32;
signed char var_18 = (signed char)-109;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
