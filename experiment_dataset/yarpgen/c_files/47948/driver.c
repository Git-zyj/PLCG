#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4584431083689127376LL;
unsigned short var_2 = (unsigned short)1117;
unsigned long long int var_6 = 17367134579566988506ULL;
signed char var_8 = (signed char)118;
int var_10 = -683964882;
unsigned long long int var_12 = 16220665817879156800ULL;
int var_14 = 1825551508;
int zero = 0;
signed char var_17 = (signed char)47;
unsigned short var_18 = (unsigned short)47943;
unsigned long long int var_19 = 17537143892913607115ULL;
unsigned char var_20 = (unsigned char)18;
short var_21 = (short)-9966;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
