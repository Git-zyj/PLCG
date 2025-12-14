#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44340;
int var_3 = -550022771;
unsigned char var_4 = (unsigned char)26;
unsigned char var_5 = (unsigned char)73;
unsigned char var_6 = (unsigned char)190;
long long int var_8 = 5061558096992018836LL;
unsigned int var_9 = 2157553272U;
unsigned long long int var_10 = 779647614783660611ULL;
unsigned long long int var_11 = 17680202842786026679ULL;
unsigned char var_12 = (unsigned char)129;
unsigned char var_14 = (unsigned char)39;
int var_15 = -1753454415;
unsigned char var_17 = (unsigned char)232;
short var_18 = (short)-4429;
int zero = 0;
signed char var_20 = (signed char)-48;
unsigned int var_21 = 506724559U;
unsigned char var_22 = (unsigned char)138;
unsigned int var_23 = 1950549630U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
