#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12580659581183700613ULL;
unsigned char var_2 = (unsigned char)127;
int var_3 = 1780658518;
unsigned short var_4 = (unsigned short)65100;
unsigned long long int var_7 = 9997765125417391016ULL;
signed char var_10 = (signed char)-41;
long long int var_11 = 5647065661183882864LL;
int zero = 0;
unsigned long long int var_12 = 6207686730873915523ULL;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
