#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 48938413;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)177;
int var_7 = 1908258194;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)216;
unsigned char var_11 = (unsigned char)135;
unsigned char var_13 = (unsigned char)19;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)166;
long long int var_16 = 225508075727140545LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
