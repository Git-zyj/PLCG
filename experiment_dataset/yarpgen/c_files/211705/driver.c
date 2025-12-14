#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1922548762;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-103;
signed char var_4 = (signed char)77;
signed char var_9 = (signed char)-48;
unsigned char var_11 = (unsigned char)71;
_Bool var_12 = (_Bool)1;
unsigned short var_14 = (unsigned short)54391;
int zero = 0;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 1784694034069806495ULL;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
