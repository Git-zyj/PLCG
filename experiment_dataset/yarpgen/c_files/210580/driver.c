#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)59;
signed char var_3 = (signed char)-69;
unsigned long long int var_4 = 13381317342884164707ULL;
short var_6 = (short)-24013;
int var_9 = 981421402;
int zero = 0;
unsigned char var_10 = (unsigned char)224;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-8905;
unsigned long long int var_13 = 4204083323327105095ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
