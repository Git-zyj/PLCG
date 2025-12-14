#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5941157189980645619LL;
unsigned long long int var_1 = 13412949096862071469ULL;
short var_4 = (short)-5275;
int var_6 = 1098979804;
unsigned int var_7 = 905569115U;
int zero = 0;
unsigned char var_10 = (unsigned char)81;
unsigned long long int var_11 = 2493988114157746010ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
