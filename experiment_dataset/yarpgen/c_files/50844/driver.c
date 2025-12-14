#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7335397499162512765ULL;
unsigned long long int var_3 = 15479853151158208434ULL;
unsigned short var_10 = (unsigned short)10531;
_Bool var_13 = (_Bool)1;
signed char var_15 = (signed char)64;
int zero = 0;
unsigned short var_17 = (unsigned short)53383;
short var_18 = (short)13724;
unsigned short var_19 = (unsigned short)8975;
unsigned char var_20 = (unsigned char)245;
short var_21 = (short)11783;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
