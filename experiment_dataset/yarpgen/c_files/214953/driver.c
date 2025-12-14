#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)4;
unsigned short var_8 = (unsigned short)41425;
signed char var_11 = (signed char)-101;
int var_15 = 1043274970;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = 592481822;
int var_20 = 489627019;
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
