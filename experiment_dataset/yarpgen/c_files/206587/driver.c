#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)105;
int var_3 = 1192237828;
signed char var_4 = (signed char)8;
signed char var_6 = (signed char)-62;
unsigned char var_16 = (unsigned char)200;
_Bool var_18 = (_Bool)1;
int zero = 0;
int var_20 = -1630004341;
unsigned char var_21 = (unsigned char)38;
unsigned long long int var_22 = 12015521098641376589ULL;
void init() {
}

void checksum() {
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
