#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)32739;
unsigned char var_5 = (unsigned char)109;
signed char var_7 = (signed char)-84;
long long int var_9 = 3278002648899147289LL;
int zero = 0;
short var_10 = (short)-7538;
unsigned short var_11 = (unsigned short)4022;
long long int var_12 = -9217361738532227276LL;
_Bool var_13 = (_Bool)1;
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
