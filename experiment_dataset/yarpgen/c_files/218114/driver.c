#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7545;
short var_2 = (short)-8015;
int var_4 = -1589153719;
signed char var_7 = (signed char)-109;
int zero = 0;
unsigned long long int var_11 = 2635889888636638945ULL;
unsigned char var_12 = (unsigned char)43;
unsigned int var_13 = 2586950182U;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
