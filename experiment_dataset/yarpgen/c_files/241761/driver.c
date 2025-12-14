#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1987761848194103960ULL;
signed char var_2 = (signed char)12;
short var_3 = (short)-2357;
long long int var_6 = -3466653235127193894LL;
long long int var_8 = -5579465280680011931LL;
unsigned long long int var_11 = 16205866467225295080ULL;
unsigned long long int var_13 = 14707792979561263453ULL;
int zero = 0;
signed char var_14 = (signed char)-30;
short var_15 = (short)1044;
unsigned short var_16 = (unsigned short)31177;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
