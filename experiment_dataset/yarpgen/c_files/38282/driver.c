#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1340793609;
int var_2 = -1252754880;
signed char var_4 = (signed char)-123;
short var_5 = (short)-31384;
unsigned char var_6 = (unsigned char)207;
unsigned char var_7 = (unsigned char)118;
signed char var_8 = (signed char)24;
int zero = 0;
unsigned int var_10 = 3516033019U;
unsigned int var_11 = 1088803148U;
unsigned long long int var_12 = 2641676928646808694ULL;
short var_13 = (short)-8001;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
