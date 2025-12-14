#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1217432823;
short var_1 = (short)26141;
int var_6 = -555704722;
unsigned short var_8 = (unsigned short)46934;
unsigned char var_11 = (unsigned char)196;
short var_12 = (short)-1785;
int zero = 0;
signed char var_15 = (signed char)-103;
signed char var_16 = (signed char)-20;
int var_17 = -1457272344;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
