#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7550;
unsigned char var_2 = (unsigned char)26;
unsigned char var_4 = (unsigned char)70;
short var_5 = (short)-10243;
unsigned char var_6 = (unsigned char)26;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-22022;
unsigned long long int var_9 = 4212452194858069415ULL;
unsigned long long int var_10 = 10543454609139299277ULL;
unsigned long long int var_12 = 1565710971003175182ULL;
unsigned char var_13 = (unsigned char)131;
unsigned long long int var_15 = 6415198687948377003ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = 274700179;
unsigned long long int var_19 = 3561773405154748560ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
