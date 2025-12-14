#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-45;
long long int var_2 = -6020336506933156410LL;
unsigned long long int var_3 = 16351845659251394903ULL;
short var_5 = (short)6372;
long long int var_6 = -6381734878745218733LL;
unsigned short var_8 = (unsigned short)21531;
short var_9 = (short)-10340;
int var_12 = -1734415432;
unsigned char var_14 = (unsigned char)121;
int zero = 0;
unsigned long long int var_15 = 14656980175950571513ULL;
short var_16 = (short)-1606;
unsigned char var_17 = (unsigned char)143;
unsigned short var_18 = (unsigned short)8299;
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
