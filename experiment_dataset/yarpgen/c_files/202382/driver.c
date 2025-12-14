#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)102;
int var_6 = 830916095;
unsigned char var_7 = (unsigned char)232;
unsigned char var_8 = (unsigned char)111;
signed char var_9 = (signed char)-73;
unsigned char var_10 = (unsigned char)170;
int zero = 0;
int var_11 = 1632014385;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-42;
signed char var_14 = (signed char)66;
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
