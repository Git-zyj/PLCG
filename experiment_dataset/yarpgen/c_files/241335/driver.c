#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)144;
unsigned long long int var_7 = 17687732708480890701ULL;
unsigned int var_8 = 2165672719U;
signed char var_9 = (signed char)-60;
unsigned char var_10 = (unsigned char)196;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)29888;
unsigned int var_14 = 2367652683U;
unsigned char var_15 = (unsigned char)197;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
