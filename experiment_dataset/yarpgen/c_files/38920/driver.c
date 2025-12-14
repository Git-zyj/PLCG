#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-20985;
signed char var_4 = (signed char)-65;
unsigned long long int var_6 = 5172598923407436094ULL;
unsigned char var_8 = (unsigned char)148;
unsigned char var_9 = (unsigned char)212;
int zero = 0;
unsigned char var_10 = (unsigned char)60;
unsigned char var_11 = (unsigned char)129;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
