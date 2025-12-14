#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8382;
signed char var_1 = (signed char)-85;
long long int var_2 = 7315622599017650098LL;
long long int var_3 = 1394142461359944454LL;
signed char var_4 = (signed char)26;
unsigned char var_8 = (unsigned char)166;
unsigned char var_10 = (unsigned char)155;
int zero = 0;
signed char var_11 = (signed char)52;
signed char var_12 = (signed char)-105;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2203511804U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
