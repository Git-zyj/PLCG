#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6597706176125391808ULL;
unsigned short var_2 = (unsigned short)13778;
unsigned char var_8 = (unsigned char)184;
long long int var_9 = 9150742053905944071LL;
short var_10 = (short)-15142;
unsigned long long int var_12 = 5488263796287386646ULL;
_Bool var_14 = (_Bool)1;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_19 = 3505238513606573432LL;
unsigned short var_20 = (unsigned short)26536;
unsigned long long int var_21 = 7747315735850501838ULL;
short var_22 = (short)16429;
void init() {
}

void checksum() {
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
