#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)12;
int var_2 = 472899013;
int var_4 = 1318759368;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned short var_10 = (unsigned short)60601;
signed char var_11 = (signed char)-2;
unsigned int var_12 = 2196786659U;
unsigned int var_13 = 1573884988U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
