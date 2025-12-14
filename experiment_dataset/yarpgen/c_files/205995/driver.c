#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)122;
long long int var_1 = -1859832364188420864LL;
signed char var_2 = (signed char)43;
short var_4 = (short)-16579;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)103;
signed char var_9 = (signed char)-27;
int zero = 0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int var_12 = -38856961;
unsigned long long int var_13 = 2112973159128129602ULL;
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
