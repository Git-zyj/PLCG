#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)83;
unsigned long long int var_2 = 7378318507196717100ULL;
unsigned char var_3 = (unsigned char)103;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-82;
unsigned char var_10 = (unsigned char)158;
unsigned int var_11 = 3118641678U;
int zero = 0;
unsigned int var_12 = 4084131227U;
int var_13 = -1933307729;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
