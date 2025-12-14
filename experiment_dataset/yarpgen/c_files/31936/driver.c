#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-3547;
_Bool var_8 = (_Bool)1;
short var_9 = (short)6932;
short var_12 = (short)-3282;
signed char var_14 = (signed char)-2;
signed char var_18 = (signed char)-25;
int zero = 0;
unsigned long long int var_19 = 15622739070735385287ULL;
signed char var_20 = (signed char)99;
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
