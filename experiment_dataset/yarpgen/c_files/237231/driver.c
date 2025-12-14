#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 929941975;
short var_2 = (short)20456;
short var_3 = (short)17034;
unsigned int var_4 = 2219543910U;
int var_11 = -66868225;
int zero = 0;
signed char var_17 = (signed char)13;
unsigned char var_18 = (unsigned char)225;
unsigned short var_19 = (unsigned short)31977;
unsigned long long int var_20 = 5206746046834259849ULL;
signed char var_21 = (signed char)21;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
