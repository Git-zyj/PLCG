#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)9;
signed char var_8 = (signed char)-1;
unsigned int var_13 = 1488439518U;
short var_14 = (short)1738;
int var_16 = 415211322;
int zero = 0;
signed char var_18 = (signed char)50;
unsigned long long int var_19 = 16462815568086747806ULL;
unsigned char var_20 = (unsigned char)121;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
