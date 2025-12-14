#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 13319226520137202184ULL;
_Bool var_11 = (_Bool)1;
signed char var_14 = (signed char)-20;
unsigned char var_15 = (unsigned char)144;
int zero = 0;
signed char var_19 = (signed char)-15;
signed char var_20 = (signed char)111;
unsigned short var_21 = (unsigned short)17015;
void init() {
}

void checksum() {
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
