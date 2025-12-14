#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3612;
unsigned int var_2 = 1903067779U;
signed char var_5 = (signed char)19;
unsigned int var_6 = 3265587716U;
unsigned char var_7 = (unsigned char)141;
unsigned short var_8 = (unsigned short)8667;
signed char var_11 = (signed char)-118;
int zero = 0;
int var_14 = 968129864;
long long int var_15 = 2039183132601705150LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
