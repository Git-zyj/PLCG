#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5375799881413640009LL;
signed char var_2 = (signed char)-31;
unsigned char var_3 = (unsigned char)158;
unsigned char var_5 = (unsigned char)69;
long long int var_6 = 7446934089090648060LL;
long long int var_7 = 7876434428771637439LL;
unsigned char var_9 = (unsigned char)33;
long long int var_10 = 9039200155154586035LL;
int zero = 0;
int var_11 = -1515231095;
unsigned long long int var_12 = 8910420533699378695ULL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
