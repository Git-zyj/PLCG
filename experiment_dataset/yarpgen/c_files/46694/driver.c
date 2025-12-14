#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1010611020;
unsigned long long int var_1 = 17191565942263208508ULL;
unsigned int var_3 = 272204666U;
unsigned char var_5 = (unsigned char)219;
signed char var_9 = (signed char)-59;
signed char var_10 = (signed char)-96;
signed char var_13 = (signed char)-120;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 18265918491634160111ULL;
unsigned int var_20 = 57784012U;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
