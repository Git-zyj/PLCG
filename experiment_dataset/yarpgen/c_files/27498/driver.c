#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-71;
long long int var_1 = -1410781745306448550LL;
signed char var_5 = (signed char)11;
unsigned short var_7 = (unsigned short)55083;
_Bool var_9 = (_Bool)0;
long long int var_11 = 489374278761081387LL;
signed char var_12 = (signed char)106;
unsigned short var_14 = (unsigned short)24609;
int zero = 0;
unsigned short var_15 = (unsigned short)40535;
unsigned int var_16 = 171990738U;
signed char var_17 = (signed char)-24;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
