#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -250151974;
unsigned short var_2 = (unsigned short)39747;
unsigned long long int var_3 = 11253784064030306803ULL;
unsigned int var_4 = 3844995587U;
unsigned long long int var_5 = 6046407712170373123ULL;
signed char var_6 = (signed char)-63;
unsigned short var_7 = (unsigned short)42928;
unsigned short var_9 = (unsigned short)56669;
int zero = 0;
unsigned int var_10 = 2907480041U;
int var_11 = -1269513633;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)53241;
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
