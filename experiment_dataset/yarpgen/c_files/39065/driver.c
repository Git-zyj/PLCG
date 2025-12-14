#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-85;
unsigned short var_12 = (unsigned short)58257;
unsigned short var_15 = (unsigned short)52001;
unsigned char var_17 = (unsigned char)140;
int zero = 0;
long long int var_18 = 6645152266119917797LL;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 12977614504567496798ULL;
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
