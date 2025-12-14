#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
signed char var_6 = (signed char)-39;
unsigned char var_8 = (unsigned char)203;
short var_9 = (short)28773;
int zero = 0;
short var_11 = (short)31036;
signed char var_12 = (signed char)-125;
int var_13 = -1509068365;
unsigned long long int var_14 = 13260360563904144077ULL;
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
