#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-123;
unsigned short var_5 = (unsigned short)61645;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)179;
unsigned char var_12 = (unsigned char)15;
int zero = 0;
short var_18 = (short)-3118;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-27507;
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
