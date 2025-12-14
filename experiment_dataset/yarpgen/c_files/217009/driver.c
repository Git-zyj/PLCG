#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-73;
unsigned short var_3 = (unsigned short)22618;
_Bool var_4 = (_Bool)1;
int var_6 = 1541932815;
short var_7 = (short)24181;
unsigned long long int var_8 = 10372107346246622344ULL;
unsigned long long int var_9 = 2045221336458141780ULL;
int var_10 = -333261666;
unsigned short var_11 = (unsigned short)21938;
signed char var_12 = (signed char)83;
int zero = 0;
unsigned char var_13 = (unsigned char)65;
unsigned short var_14 = (unsigned short)30972;
unsigned char var_15 = (unsigned char)52;
unsigned long long int var_16 = 10180522350291973405ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
