#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15440013153472819928ULL;
unsigned long long int var_1 = 3221964623218658022ULL;
unsigned int var_2 = 34753093U;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)157;
signed char var_6 = (signed char)-21;
signed char var_7 = (signed char)-64;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)48;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 16313441445820796321ULL;
unsigned char var_13 = (unsigned char)42;
unsigned long long int var_14 = 12655018514134234470ULL;
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
