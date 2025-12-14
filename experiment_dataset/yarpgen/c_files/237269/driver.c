#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1979809633;
unsigned char var_6 = (unsigned char)187;
unsigned short var_8 = (unsigned short)12314;
int var_10 = -1189389361;
unsigned char var_13 = (unsigned char)87;
unsigned char var_17 = (unsigned char)45;
unsigned long long int var_19 = 12038778790230744301ULL;
int zero = 0;
int var_20 = -609135202;
signed char var_21 = (signed char)-38;
signed char var_22 = (signed char)71;
unsigned short var_23 = (unsigned short)396;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
