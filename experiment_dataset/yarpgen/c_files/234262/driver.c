#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9134836637657374279ULL;
short var_1 = (short)-28243;
long long int var_2 = -9010642175928425954LL;
short var_3 = (short)-197;
unsigned long long int var_4 = 4706835182506406742ULL;
unsigned long long int var_5 = 8874509947691059769ULL;
unsigned short var_6 = (unsigned short)11606;
short var_8 = (short)-26788;
int var_9 = -1309991166;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_11 = 4287665275279775072LL;
unsigned long long int var_12 = 1487995423147159681ULL;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)34051;
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
