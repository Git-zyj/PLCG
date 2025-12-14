#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11602;
long long int var_1 = -3366109926902375585LL;
signed char var_3 = (signed char)1;
unsigned char var_4 = (unsigned char)255;
unsigned char var_6 = (unsigned char)83;
long long int var_7 = -2511676215972826579LL;
int var_8 = -1454334351;
unsigned long long int var_13 = 8982034910006124878ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)234;
signed char var_15 = (signed char)126;
unsigned int var_16 = 3613196894U;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 14930592334490838394ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
