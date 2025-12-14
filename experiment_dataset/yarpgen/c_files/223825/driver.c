#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_3 = 358336524;
unsigned short var_6 = (unsigned short)21057;
unsigned short var_8 = (unsigned short)17051;
long long int var_12 = -8282298922039644988LL;
_Bool var_15 = (_Bool)1;
signed char var_18 = (signed char)83;
int zero = 0;
unsigned char var_19 = (unsigned char)176;
unsigned long long int var_20 = 3053234492956875279ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
