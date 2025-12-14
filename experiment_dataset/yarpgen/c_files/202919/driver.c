#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3711186115U;
unsigned char var_1 = (unsigned char)169;
unsigned short var_2 = (unsigned short)36644;
signed char var_4 = (signed char)-4;
unsigned char var_7 = (unsigned char)224;
unsigned int var_8 = 1182666909U;
int zero = 0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)95;
signed char var_13 = (signed char)-71;
void init() {
}

void checksum() {
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
