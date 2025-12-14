#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)6;
signed char var_2 = (signed char)53;
unsigned char var_5 = (unsigned char)151;
int var_7 = 144686680;
int var_8 = 1818882591;
int var_9 = 237556230;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 5793783314344408968ULL;
int var_16 = 587752266;
int var_17 = 2124404634;
int zero = 0;
unsigned long long int var_18 = 13863396949560236021ULL;
unsigned short var_19 = (unsigned short)26688;
unsigned char var_20 = (unsigned char)53;
signed char var_21 = (signed char)105;
_Bool var_22 = (_Bool)0;
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
