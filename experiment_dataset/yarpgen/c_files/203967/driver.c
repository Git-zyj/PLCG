#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-8;
unsigned char var_4 = (unsigned char)156;
unsigned int var_6 = 1671399477U;
unsigned long long int var_7 = 7001725718760425565ULL;
unsigned short var_8 = (unsigned short)2440;
signed char var_12 = (signed char)-105;
signed char var_13 = (signed char)-94;
long long int var_15 = 535483589690515284LL;
unsigned long long int var_17 = 578494490212781462ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)135;
unsigned short var_19 = (unsigned short)4822;
unsigned short var_20 = (unsigned short)53260;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
