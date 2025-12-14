#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)162;
unsigned short var_5 = (unsigned short)58474;
long long int var_7 = 7007336700052196579LL;
unsigned char var_9 = (unsigned char)248;
_Bool var_10 = (_Bool)1;
_Bool var_13 = (_Bool)1;
long long int var_15 = 6458546740725740081LL;
int zero = 0;
long long int var_18 = -4860944785583435231LL;
unsigned int var_19 = 1095461448U;
signed char var_20 = (signed char)-68;
unsigned short var_21 = (unsigned short)5403;
long long int var_22 = 5433020572603718079LL;
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
