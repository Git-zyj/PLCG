#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18043;
signed char var_1 = (signed char)-87;
int var_2 = 1424156435;
int var_4 = 1699548818;
unsigned long long int var_5 = 17281189104460035960ULL;
unsigned short var_6 = (unsigned short)48325;
unsigned short var_7 = (unsigned short)51974;
unsigned long long int var_9 = 9584195163353058784ULL;
int var_10 = 2097790088;
long long int var_11 = 8392967355306806216LL;
unsigned short var_14 = (unsigned short)57436;
unsigned long long int var_15 = 6662811665135286102ULL;
signed char var_16 = (signed char)-22;
int zero = 0;
signed char var_18 = (signed char)94;
signed char var_19 = (signed char)-32;
unsigned char var_20 = (unsigned char)67;
unsigned long long int var_21 = 7189254242496569566ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
