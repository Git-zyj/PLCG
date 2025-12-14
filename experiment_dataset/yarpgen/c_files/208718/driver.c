#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3029670622921427579ULL;
unsigned short var_1 = (unsigned short)38831;
unsigned int var_2 = 4178985727U;
unsigned short var_3 = (unsigned short)27857;
unsigned char var_4 = (unsigned char)163;
unsigned int var_7 = 173622804U;
signed char var_9 = (signed char)127;
int zero = 0;
int var_12 = 2040218300;
signed char var_13 = (signed char)-64;
unsigned int var_14 = 646833515U;
short var_15 = (short)-22172;
short var_16 = (short)-9433;
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
