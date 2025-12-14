#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13517381627275009560ULL;
int var_2 = 94968918;
long long int var_3 = 1954294654515034155LL;
long long int var_5 = -6299761939877016798LL;
unsigned long long int var_6 = 15853845848029804192ULL;
unsigned short var_8 = (unsigned short)65184;
short var_9 = (short)-26514;
short var_10 = (short)26749;
short var_11 = (short)-30550;
int zero = 0;
signed char var_12 = (signed char)-71;
short var_13 = (short)5345;
short var_14 = (short)284;
unsigned long long int var_15 = 16029958826028029380ULL;
unsigned long long int var_16 = 6069973981408389822ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
