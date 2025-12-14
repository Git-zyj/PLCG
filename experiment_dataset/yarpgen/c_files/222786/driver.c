#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3343804748U;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 1627609817568683810ULL;
signed char var_6 = (signed char)111;
int var_8 = -350397979;
unsigned short var_10 = (unsigned short)23224;
unsigned char var_15 = (unsigned char)219;
int zero = 0;
unsigned char var_18 = (unsigned char)94;
unsigned long long int var_19 = 4867249168370968382ULL;
int var_20 = -1833031953;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
