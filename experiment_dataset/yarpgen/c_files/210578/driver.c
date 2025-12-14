#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60943;
unsigned long long int var_2 = 11388758449471740101ULL;
signed char var_3 = (signed char)-74;
unsigned short var_6 = (unsigned short)55207;
int var_7 = -523769569;
unsigned int var_10 = 1844065502U;
unsigned short var_12 = (unsigned short)12781;
int var_13 = 412470970;
unsigned short var_15 = (unsigned short)31356;
short var_16 = (short)2597;
int zero = 0;
int var_17 = -581250095;
int var_18 = 1395468878;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
