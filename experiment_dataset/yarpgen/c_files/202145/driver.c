#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-11343;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)85;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 1229514723U;
unsigned char var_19 = (unsigned char)251;
unsigned short var_20 = (unsigned short)4164;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
