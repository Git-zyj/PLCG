#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)245;
unsigned char var_2 = (unsigned char)44;
signed char var_3 = (signed char)-74;
unsigned short var_6 = (unsigned short)58346;
unsigned long long int var_8 = 13942172125105160158ULL;
short var_9 = (short)-21133;
unsigned int var_10 = 1447121981U;
unsigned long long int var_11 = 11129155043208097720ULL;
unsigned long long int var_13 = 6305170567642450007ULL;
int zero = 0;
long long int var_15 = 3925456027403663066LL;
unsigned short var_16 = (unsigned short)58995;
unsigned long long int var_17 = 7069273794902571752ULL;
long long int var_18 = -7138173753646132459LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
