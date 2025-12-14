#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)13825;
long long int var_3 = 3438739662690746233LL;
unsigned char var_4 = (unsigned char)81;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)123;
int zero = 0;
unsigned int var_15 = 1014187708U;
unsigned short var_16 = (unsigned short)31783;
unsigned int var_17 = 2271912922U;
signed char var_18 = (signed char)-79;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
