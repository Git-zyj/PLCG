#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)126;
short var_3 = (short)-20398;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)53340;
long long int var_8 = 3708308637325461378LL;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)52210;
unsigned long long int var_11 = 4216213441588560365ULL;
unsigned char var_15 = (unsigned char)199;
long long int var_17 = 1900699688603756309LL;
unsigned char var_18 = (unsigned char)119;
int zero = 0;
long long int var_19 = 4867946542934654267LL;
int var_20 = 858923487;
void init() {
}

void checksum() {
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
