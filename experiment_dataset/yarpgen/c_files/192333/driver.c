#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1233449334;
signed char var_2 = (signed char)66;
int var_3 = 1221609771;
signed char var_5 = (signed char)62;
unsigned long long int var_6 = 10255087031326580353ULL;
int var_8 = -776594888;
unsigned char var_11 = (unsigned char)74;
int zero = 0;
int var_13 = 257107418;
int var_14 = 1624224655;
int var_15 = -882647202;
unsigned int var_16 = 696005321U;
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
