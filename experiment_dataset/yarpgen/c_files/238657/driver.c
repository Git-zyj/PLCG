#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)188;
unsigned char var_1 = (unsigned char)9;
unsigned char var_3 = (unsigned char)234;
short var_4 = (short)13002;
unsigned int var_8 = 344096554U;
short var_9 = (short)-26163;
signed char var_10 = (signed char)-1;
unsigned long long int var_12 = 18429362168966069081ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 122143454151699719ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
