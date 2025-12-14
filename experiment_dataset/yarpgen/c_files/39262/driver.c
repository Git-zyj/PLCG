#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41542;
signed char var_1 = (signed char)108;
unsigned long long int var_2 = 1819109132005548961ULL;
int var_4 = -1425520833;
signed char var_6 = (signed char)119;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 820894588U;
signed char var_9 = (signed char)80;
int zero = 0;
unsigned char var_10 = (unsigned char)194;
unsigned long long int var_11 = 16838529516070133236ULL;
unsigned char var_12 = (unsigned char)86;
unsigned short var_13 = (unsigned short)15897;
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
