#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)358;
unsigned short var_3 = (unsigned short)42845;
unsigned int var_6 = 3455343452U;
long long int var_13 = -3312822471895204334LL;
unsigned long long int var_15 = 13546442420426297612ULL;
int var_16 = 607735507;
unsigned int var_17 = 586779561U;
int zero = 0;
long long int var_18 = 9053730397105984561LL;
signed char var_19 = (signed char)63;
unsigned char var_20 = (unsigned char)194;
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
