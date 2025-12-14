#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-100;
long long int var_7 = -9223206970658699943LL;
unsigned char var_13 = (unsigned char)204;
unsigned short var_15 = (unsigned short)30776;
int zero = 0;
unsigned char var_18 = (unsigned char)217;
int var_19 = -455829461;
_Bool var_20 = (_Bool)0;
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
