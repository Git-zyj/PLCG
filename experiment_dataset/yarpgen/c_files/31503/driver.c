#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1276546620692425173LL;
long long int var_1 = -3630916034883761741LL;
unsigned long long int var_2 = 11080190701842609124ULL;
unsigned long long int var_7 = 6626445174318981496ULL;
unsigned char var_8 = (unsigned char)49;
unsigned long long int var_9 = 17616575766956111534ULL;
long long int var_10 = -944234064226978751LL;
int var_11 = 1849823926;
signed char var_12 = (signed char)-53;
short var_13 = (short)-20835;
int var_14 = 375282595;
unsigned char var_17 = (unsigned char)91;
int zero = 0;
unsigned char var_19 = (unsigned char)66;
signed char var_20 = (signed char)-15;
signed char var_21 = (signed char)-82;
long long int var_22 = -991155859548591352LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
