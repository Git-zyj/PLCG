#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 965167628819192271LL;
long long int var_3 = 8348124850417146046LL;
short var_4 = (short)-12248;
unsigned char var_5 = (unsigned char)194;
unsigned long long int var_6 = 7674127764836353790ULL;
long long int var_9 = 5329248058315442463LL;
unsigned char var_12 = (unsigned char)203;
int var_13 = -294531539;
unsigned long long int var_15 = 13129469094057970640ULL;
int zero = 0;
int var_17 = 919266238;
short var_18 = (short)27996;
void init() {
}

void checksum() {
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
