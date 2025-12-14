#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1089622039U;
signed char var_4 = (signed char)95;
unsigned long long int var_6 = 2081996973171009006ULL;
unsigned long long int var_7 = 7756921823161173321ULL;
unsigned long long int var_8 = 7907606909110998788ULL;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)61081;
int zero = 0;
unsigned long long int var_11 = 7491707649438719389ULL;
short var_12 = (short)-516;
unsigned char var_13 = (unsigned char)193;
unsigned long long int var_14 = 8868414116111501174ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
