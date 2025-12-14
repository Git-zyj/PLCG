#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-29150;
unsigned long long int var_3 = 14210935555873316459ULL;
unsigned short var_4 = (unsigned short)3134;
int var_7 = 1432524174;
unsigned short var_11 = (unsigned short)64864;
short var_13 = (short)12708;
unsigned long long int var_14 = 15998604721196288610ULL;
unsigned char var_15 = (unsigned char)34;
unsigned long long int var_16 = 9870389561474254775ULL;
unsigned int var_17 = 295992833U;
signed char var_18 = (signed char)17;
int zero = 0;
unsigned long long int var_19 = 2033600765490063948ULL;
unsigned long long int var_20 = 7028830385333730461ULL;
short var_21 = (short)3430;
short var_22 = (short)20001;
unsigned char var_23 = (unsigned char)6;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
