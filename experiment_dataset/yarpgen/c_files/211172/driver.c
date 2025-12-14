#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13331;
unsigned int var_2 = 1668755022U;
short var_4 = (short)-32172;
_Bool var_6 = (_Bool)0;
unsigned long long int var_11 = 5495949200122481184ULL;
unsigned long long int var_15 = 15342041687391378212ULL;
unsigned char var_17 = (unsigned char)121;
short var_18 = (short)-29875;
int zero = 0;
unsigned long long int var_19 = 574025150316008096ULL;
unsigned short var_20 = (unsigned short)11004;
int var_21 = -508310370;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
