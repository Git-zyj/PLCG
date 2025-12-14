#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3784869111673702920ULL;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-30201;
unsigned char var_6 = (unsigned char)63;
_Bool var_8 = (_Bool)1;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_12 = 4054849721U;
short var_13 = (short)-27041;
long long int var_14 = 2153170578962784955LL;
signed char var_15 = (signed char)65;
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
