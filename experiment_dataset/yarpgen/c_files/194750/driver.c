#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-91;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 6970634167236522870ULL;
unsigned int var_7 = 3204631799U;
unsigned long long int var_9 = 8327209250152904121ULL;
long long int var_11 = 2141022469660417514LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)27282;
unsigned char var_16 = (unsigned char)223;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
