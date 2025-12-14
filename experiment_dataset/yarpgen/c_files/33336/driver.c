#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-108;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)66;
signed char var_8 = (signed char)34;
unsigned char var_10 = (unsigned char)236;
_Bool var_11 = (_Bool)1;
int var_13 = 606880087;
_Bool var_14 = (_Bool)1;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
int zero = 0;
long long int var_19 = -6819833239466812222LL;
int var_20 = 1009979753;
unsigned long long int var_21 = 18234644415404790719ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
