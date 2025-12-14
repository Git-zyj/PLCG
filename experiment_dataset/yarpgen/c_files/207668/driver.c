#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1058440577;
signed char var_1 = (signed char)-84;
int var_9 = -372742817;
_Bool var_10 = (_Bool)0;
long long int var_15 = -8513044731033574839LL;
short var_16 = (short)-2021;
int zero = 0;
unsigned short var_19 = (unsigned short)43460;
unsigned char var_20 = (unsigned char)81;
void init() {
}

void checksum() {
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
