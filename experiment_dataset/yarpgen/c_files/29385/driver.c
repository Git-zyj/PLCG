#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1427;
signed char var_1 = (signed char)-47;
signed char var_3 = (signed char)86;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)156;
unsigned char var_8 = (unsigned char)54;
int zero = 0;
signed char var_11 = (signed char)-109;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
