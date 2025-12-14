#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_4 = (unsigned char)194;
unsigned char var_6 = (unsigned char)11;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)30;
short var_9 = (short)-6739;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 10839088120113218901ULL;
long long int var_12 = 3529617187634753281LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
