#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3950712017147192665LL;
unsigned short var_2 = (unsigned short)49867;
_Bool var_3 = (_Bool)0;
unsigned int var_6 = 223297465U;
signed char var_8 = (signed char)23;
int zero = 0;
unsigned long long int var_12 = 3644588164221477804ULL;
unsigned char var_13 = (unsigned char)118;
signed char var_14 = (signed char)-87;
unsigned char var_15 = (unsigned char)188;
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
