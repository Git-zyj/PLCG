#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3274508843U;
unsigned char var_10 = (unsigned char)190;
long long int var_11 = 7709051553904137475LL;
unsigned char var_13 = (unsigned char)137;
signed char var_14 = (signed char)-10;
int zero = 0;
unsigned long long int var_19 = 1848689724426456265ULL;
unsigned short var_20 = (unsigned short)14194;
int var_21 = -1505143103;
_Bool var_22 = (_Bool)0;
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
