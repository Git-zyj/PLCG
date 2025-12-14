#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)37569;
signed char var_4 = (signed char)122;
unsigned short var_5 = (unsigned short)48740;
signed char var_9 = (signed char)-121;
short var_11 = (short)-15218;
unsigned long long int var_12 = 7578792450247210670ULL;
signed char var_13 = (signed char)-101;
long long int var_17 = -2345477359159372500LL;
int zero = 0;
int var_18 = -294376856;
signed char var_19 = (signed char)-122;
unsigned int var_20 = 1254653426U;
unsigned int var_21 = 91931145U;
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
