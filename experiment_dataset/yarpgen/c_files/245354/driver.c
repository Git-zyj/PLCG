#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)175;
unsigned char var_1 = (unsigned char)214;
long long int var_2 = 1276033325802220974LL;
unsigned long long int var_4 = 4257728370729906738ULL;
signed char var_5 = (signed char)-10;
unsigned long long int var_8 = 9595440797167894427ULL;
unsigned char var_9 = (unsigned char)96;
int zero = 0;
unsigned int var_11 = 2095877147U;
unsigned short var_12 = (unsigned short)26334;
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
