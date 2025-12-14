#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5436418724184240988LL;
unsigned long long int var_2 = 16127325754132791170ULL;
int var_4 = -453821001;
signed char var_6 = (signed char)4;
long long int var_14 = 3355692940136074378LL;
int zero = 0;
unsigned char var_20 = (unsigned char)251;
unsigned long long int var_21 = 4273269306036018239ULL;
unsigned short var_22 = (unsigned short)54277;
unsigned char var_23 = (unsigned char)100;
int var_24 = -575865339;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
