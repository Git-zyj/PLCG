#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1070975163475985744LL;
unsigned long long int var_3 = 10002258772926581646ULL;
unsigned int var_4 = 2185559060U;
short var_5 = (short)15549;
unsigned long long int var_6 = 9369952531660462825ULL;
unsigned char var_9 = (unsigned char)161;
unsigned char var_12 = (unsigned char)149;
int zero = 0;
long long int var_13 = -5322582138940790284LL;
unsigned char var_14 = (unsigned char)219;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
