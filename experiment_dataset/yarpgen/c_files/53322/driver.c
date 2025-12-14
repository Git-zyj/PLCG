#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51436;
int var_2 = 1785997225;
int var_3 = 356014475;
unsigned long long int var_4 = 13010823507563820095ULL;
int var_5 = -1520121392;
long long int var_6 = -6962419636978610785LL;
int var_8 = 1069982989;
_Bool var_10 = (_Bool)1;
int var_11 = -92945422;
int zero = 0;
signed char var_12 = (signed char)-67;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)32;
unsigned char var_15 = (unsigned char)15;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
