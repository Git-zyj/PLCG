#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 58404346;
unsigned char var_7 = (unsigned char)106;
unsigned long long int var_10 = 7120144823921310973ULL;
short var_12 = (short)-13459;
unsigned long long int var_13 = 8354936291221969023ULL;
unsigned char var_14 = (unsigned char)57;
int zero = 0;
signed char var_15 = (signed char)81;
unsigned char var_16 = (unsigned char)21;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
