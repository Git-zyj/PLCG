#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1482383282;
unsigned short var_8 = (unsigned short)22942;
short var_13 = (short)-12499;
unsigned char var_17 = (unsigned char)191;
long long int var_18 = 5152481044149681417LL;
unsigned short var_19 = (unsigned short)37716;
int zero = 0;
short var_20 = (short)16909;
signed char var_21 = (signed char)-41;
short var_22 = (short)775;
void init() {
}

void checksum() {
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
