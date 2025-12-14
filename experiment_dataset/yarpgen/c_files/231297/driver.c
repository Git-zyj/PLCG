#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-67;
unsigned short var_5 = (unsigned short)10362;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)-32;
int var_13 = 925854455;
unsigned long long int var_14 = 5611903292721015665ULL;
unsigned int var_15 = 3235721124U;
int zero = 0;
unsigned int var_17 = 1163002821U;
unsigned short var_18 = (unsigned short)25631;
int var_19 = 629956366;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
