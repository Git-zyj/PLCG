#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1215243794;
long long int var_2 = 1649745002907373084LL;
short var_3 = (short)18689;
long long int var_8 = -1973463404470704103LL;
long long int var_13 = -2432412105418004562LL;
unsigned short var_14 = (unsigned short)54354;
int zero = 0;
unsigned char var_16 = (unsigned char)254;
unsigned char var_17 = (unsigned char)48;
_Bool var_18 = (_Bool)0;
int var_19 = -803851463;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
