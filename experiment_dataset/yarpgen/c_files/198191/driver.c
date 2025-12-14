#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)65;
short var_1 = (short)25843;
unsigned char var_3 = (unsigned char)199;
long long int var_5 = 9122287070439114576LL;
_Bool var_7 = (_Bool)1;
unsigned short var_12 = (unsigned short)60663;
_Bool var_16 = (_Bool)1;
short var_18 = (short)-29441;
int zero = 0;
unsigned int var_19 = 3333280433U;
long long int var_20 = 6066223435392105734LL;
unsigned short var_21 = (unsigned short)36909;
unsigned int var_22 = 670116963U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
