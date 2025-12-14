#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26626;
unsigned char var_1 = (unsigned char)14;
int var_3 = 564074514;
long long int var_4 = -1779189437243785458LL;
unsigned short var_7 = (unsigned short)22785;
int var_9 = -1218781893;
unsigned short var_14 = (unsigned short)26993;
int zero = 0;
unsigned int var_16 = 3905595718U;
unsigned long long int var_17 = 7921402743936582131ULL;
unsigned short var_18 = (unsigned short)33864;
unsigned short var_19 = (unsigned short)54787;
short var_20 = (short)5194;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
