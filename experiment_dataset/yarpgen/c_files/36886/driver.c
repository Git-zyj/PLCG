#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 738226336;
short var_2 = (short)-5320;
unsigned short var_4 = (unsigned short)63926;
unsigned char var_5 = (unsigned char)133;
unsigned short var_6 = (unsigned short)3964;
signed char var_7 = (signed char)-12;
unsigned long long int var_9 = 11609359684575832825ULL;
unsigned int var_11 = 1775933230U;
int zero = 0;
unsigned char var_12 = (unsigned char)226;
int var_13 = 150392817;
short var_14 = (short)-13909;
unsigned long long int var_15 = 15500940767116980583ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
