#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9435467521464961564ULL;
signed char var_1 = (signed char)23;
unsigned char var_2 = (unsigned char)177;
unsigned long long int var_3 = 1061118883410088911ULL;
unsigned char var_5 = (unsigned char)103;
short var_6 = (short)25437;
int var_8 = -1491564030;
unsigned long long int var_10 = 6689717964313087747ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)56569;
short var_12 = (short)15602;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
