#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)72;
unsigned short var_2 = (unsigned short)39497;
unsigned short var_5 = (unsigned short)57210;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)42;
unsigned long long int var_9 = 6726827016632552192ULL;
unsigned char var_10 = (unsigned char)90;
signed char var_12 = (signed char)48;
unsigned long long int var_14 = 1704199349696900240ULL;
signed char var_16 = (signed char)109;
unsigned long long int var_17 = 12661284225435448849ULL;
unsigned long long int var_18 = 12860660392055040567ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)23813;
unsigned long long int var_20 = 10432921348918669497ULL;
unsigned short var_21 = (unsigned short)52057;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
