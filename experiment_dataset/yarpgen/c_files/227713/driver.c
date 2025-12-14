#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 207325002U;
_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 8531180678056665285ULL;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)54;
unsigned char var_10 = (unsigned char)197;
short var_11 = (short)-27598;
int zero = 0;
unsigned char var_12 = (unsigned char)0;
short var_13 = (short)-25631;
short var_14 = (short)31498;
unsigned int var_15 = 3916755096U;
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
