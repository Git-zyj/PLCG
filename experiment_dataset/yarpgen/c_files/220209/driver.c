#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)84;
unsigned int var_1 = 2136667417U;
unsigned int var_4 = 3566704723U;
signed char var_6 = (signed char)79;
short var_7 = (short)20886;
unsigned int var_8 = 3763550568U;
unsigned long long int var_9 = 15629304832285401895ULL;
signed char var_14 = (signed char)106;
int zero = 0;
signed char var_16 = (signed char)51;
signed char var_17 = (signed char)85;
unsigned char var_18 = (unsigned char)254;
unsigned short var_19 = (unsigned short)50662;
signed char var_20 = (signed char)-20;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
