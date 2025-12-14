#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)87;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)136;
unsigned short var_11 = (unsigned short)980;
int var_15 = 1211706340;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 16944612299837979269ULL;
unsigned short var_21 = (unsigned short)16549;
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
