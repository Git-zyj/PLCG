#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57997;
unsigned short var_5 = (unsigned short)28167;
signed char var_6 = (signed char)104;
signed char var_8 = (signed char)-32;
unsigned char var_9 = (unsigned char)175;
signed char var_19 = (signed char)-48;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)46530;
unsigned int var_22 = 1634261751U;
unsigned int var_23 = 135699383U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
