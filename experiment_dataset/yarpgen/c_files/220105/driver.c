#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-55;
signed char var_5 = (signed char)24;
signed char var_6 = (signed char)-62;
signed char var_7 = (signed char)15;
int var_8 = 973424176;
unsigned short var_10 = (unsigned short)48653;
signed char var_12 = (signed char)28;
unsigned long long int var_15 = 15159380116697605593ULL;
unsigned char var_16 = (unsigned char)142;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 18348694025403739426ULL;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-56;
int var_22 = -601679142;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
