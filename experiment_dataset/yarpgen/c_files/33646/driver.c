#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = 195162699;
unsigned long long int var_3 = 12330871852967682490ULL;
unsigned long long int var_7 = 3241900234509933909ULL;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)-90;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)-48;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 3370945813535186348ULL;
unsigned char var_15 = (unsigned char)14;
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
