#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3897041363U;
unsigned char var_1 = (unsigned char)157;
signed char var_2 = (signed char)-27;
unsigned char var_3 = (unsigned char)68;
unsigned short var_4 = (unsigned short)63255;
unsigned char var_6 = (unsigned char)12;
_Bool var_8 = (_Bool)0;
int zero = 0;
long long int var_10 = -8834345226057259144LL;
signed char var_11 = (signed char)21;
unsigned long long int var_12 = 8394461340930445835ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
