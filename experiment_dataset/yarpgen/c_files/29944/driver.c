#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 81559149;
unsigned int var_2 = 3390954105U;
signed char var_3 = (signed char)-69;
short var_4 = (short)-10081;
_Bool var_8 = (_Bool)1;
long long int var_9 = 5449282433548715717LL;
unsigned int var_11 = 1660370980U;
_Bool var_12 = (_Bool)0;
unsigned char var_14 = (unsigned char)109;
int zero = 0;
unsigned long long int var_17 = 10087171570747556893ULL;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 11483608827055833779ULL;
int var_20 = 982841548;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
