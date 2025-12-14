#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)55332;
int var_4 = 1529825637;
unsigned short var_5 = (unsigned short)51028;
signed char var_7 = (signed char)89;
short var_8 = (short)4435;
signed char var_12 = (signed char)-90;
signed char var_14 = (signed char)67;
unsigned int var_16 = 1362312286U;
int zero = 0;
short var_20 = (short)-2554;
int var_21 = 928666318;
unsigned long long int var_22 = 13581235478492908544ULL;
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
