#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-79;
long long int var_5 = -7456014633533012713LL;
int var_10 = -102629871;
signed char var_11 = (signed char)-57;
unsigned long long int var_12 = 11328859829812249516ULL;
signed char var_16 = (signed char)70;
int zero = 0;
unsigned short var_20 = (unsigned short)52992;
short var_21 = (short)-5668;
void init() {
}

void checksum() {
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
