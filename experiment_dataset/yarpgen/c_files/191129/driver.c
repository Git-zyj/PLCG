#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)116;
unsigned int var_3 = 1576694189U;
unsigned short var_4 = (unsigned short)22068;
signed char var_5 = (signed char)-23;
signed char var_7 = (signed char)-85;
unsigned long long int var_9 = 13618344475879493788ULL;
signed char var_10 = (signed char)110;
int var_11 = 1733246866;
short var_13 = (short)-9954;
int zero = 0;
unsigned char var_14 = (unsigned char)186;
unsigned char var_15 = (unsigned char)114;
int var_16 = -893478103;
void init() {
}

void checksum() {
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
