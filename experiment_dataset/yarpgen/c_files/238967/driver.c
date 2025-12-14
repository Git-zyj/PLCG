#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)65;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 7068205726838723179ULL;
signed char var_4 = (signed char)-82;
unsigned short var_6 = (unsigned short)37523;
int zero = 0;
long long int var_11 = 5232456456185815841LL;
unsigned int var_12 = 884377926U;
unsigned short var_13 = (unsigned short)1072;
unsigned int var_14 = 211096956U;
unsigned long long int var_15 = 6240550307148491349ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
