#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5636300624227032414LL;
short var_6 = (short)-11374;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-41;
unsigned char var_10 = (unsigned char)11;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 14547676153630136510ULL;
unsigned int var_13 = 3358756127U;
unsigned short var_14 = (unsigned short)40718;
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
