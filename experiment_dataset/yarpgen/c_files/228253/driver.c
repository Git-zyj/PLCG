#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)13;
unsigned int var_3 = 862731992U;
short var_4 = (short)25893;
signed char var_7 = (signed char)-80;
unsigned char var_10 = (unsigned char)189;
signed char var_11 = (signed char)-19;
unsigned short var_13 = (unsigned short)31142;
int var_14 = 609696292;
short var_17 = (short)-9694;
int zero = 0;
signed char var_20 = (signed char)-82;
signed char var_21 = (signed char)113;
unsigned long long int var_22 = 14424394237898416343ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
