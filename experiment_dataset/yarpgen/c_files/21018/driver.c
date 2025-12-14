#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)88;
signed char var_2 = (signed char)68;
short var_3 = (short)-25713;
unsigned short var_5 = (unsigned short)47413;
short var_7 = (short)-22191;
short var_9 = (short)11115;
signed char var_10 = (signed char)27;
signed char var_11 = (signed char)67;
signed char var_12 = (signed char)-82;
unsigned short var_15 = (unsigned short)27839;
signed char var_18 = (signed char)22;
unsigned int var_19 = 2318322629U;
int zero = 0;
unsigned char var_20 = (unsigned char)111;
signed char var_21 = (signed char)-70;
int var_22 = 1712348499;
short var_23 = (short)-29261;
void init() {
}

void checksum() {
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
