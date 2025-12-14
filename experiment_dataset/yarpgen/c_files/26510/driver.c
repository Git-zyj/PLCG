#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)28002;
signed char var_3 = (signed char)-28;
int var_7 = 1770041974;
unsigned char var_8 = (unsigned char)187;
unsigned long long int var_9 = 9587983990560182578ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)56984;
unsigned short var_13 = (unsigned short)18649;
unsigned short var_14 = (unsigned short)52173;
unsigned int var_15 = 1365097945U;
unsigned char var_16 = (unsigned char)162;
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
