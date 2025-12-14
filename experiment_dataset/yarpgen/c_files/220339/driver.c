#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)-5020;
unsigned char var_4 = (unsigned char)60;
unsigned char var_7 = (unsigned char)78;
unsigned int var_9 = 274564457U;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_12 = -7013990221822116026LL;
unsigned long long int var_13 = 10480179972883935646ULL;
short var_14 = (short)26847;
short var_15 = (short)-26049;
unsigned int var_16 = 2963485551U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
