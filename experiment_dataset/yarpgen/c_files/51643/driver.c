#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30935;
unsigned short var_2 = (unsigned short)22322;
signed char var_4 = (signed char)-21;
int var_5 = -382066268;
unsigned short var_6 = (unsigned short)19990;
signed char var_8 = (signed char)114;
unsigned short var_15 = (unsigned short)63926;
int zero = 0;
int var_18 = -495266612;
unsigned char var_19 = (unsigned char)207;
signed char var_20 = (signed char)12;
long long int var_21 = -3720851324617671855LL;
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
