#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 332660916299090095ULL;
int var_1 = 1351402325;
unsigned int var_2 = 1086993986U;
unsigned char var_5 = (unsigned char)66;
unsigned short var_7 = (unsigned short)44458;
unsigned short var_8 = (unsigned short)53372;
int var_13 = 1530854443;
unsigned short var_17 = (unsigned short)7381;
int zero = 0;
unsigned long long int var_20 = 17248708743796424164ULL;
int var_21 = 711542345;
unsigned short var_22 = (unsigned short)24001;
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
