#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3092428406416008765ULL;
_Bool var_2 = (_Bool)0;
short var_4 = (short)-2958;
int var_5 = -466421278;
unsigned long long int var_7 = 10338160766668466126ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)137;
unsigned int var_12 = 4028504850U;
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
