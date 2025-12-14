#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16589;
unsigned long long int var_2 = 14271699898059840079ULL;
unsigned int var_4 = 1429663925U;
unsigned long long int var_5 = 4205353907775512259ULL;
unsigned short var_7 = (unsigned short)23246;
signed char var_8 = (signed char)90;
signed char var_9 = (signed char)-46;
int zero = 0;
unsigned char var_10 = (unsigned char)70;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)74;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
