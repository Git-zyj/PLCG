#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)105;
signed char var_5 = (signed char)-44;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)235;
unsigned long long int var_8 = 4242043998887828188ULL;
signed char var_10 = (signed char)-54;
signed char var_11 = (signed char)35;
short var_12 = (short)-5112;
int zero = 0;
unsigned int var_14 = 2863242937U;
int var_15 = -1915187756;
void init() {
}

void checksum() {
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
