#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6200;
unsigned char var_2 = (unsigned char)148;
short var_4 = (short)20061;
signed char var_5 = (signed char)-101;
unsigned long long int var_6 = 11337339331220143743ULL;
unsigned long long int var_7 = 12046239043608704727ULL;
long long int var_8 = 3606954362686849435LL;
long long int var_9 = 1420231662112216912LL;
signed char var_11 = (signed char)-69;
int zero = 0;
unsigned int var_12 = 3790397313U;
unsigned short var_13 = (unsigned short)64265;
unsigned short var_14 = (unsigned short)59356;
void init() {
}

void checksum() {
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
