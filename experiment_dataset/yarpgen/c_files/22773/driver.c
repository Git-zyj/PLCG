#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)163;
unsigned char var_2 = (unsigned char)215;
unsigned short var_4 = (unsigned short)56333;
unsigned short var_6 = (unsigned short)53632;
short var_9 = (short)-26196;
unsigned short var_15 = (unsigned short)6172;
int zero = 0;
long long int var_17 = 7946075331499408504LL;
short var_18 = (short)-10629;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
