#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24400;
unsigned char var_4 = (unsigned char)135;
unsigned char var_5 = (unsigned char)5;
long long int var_6 = -2968559151610124485LL;
short var_12 = (short)13257;
int zero = 0;
signed char var_17 = (signed char)81;
unsigned char var_18 = (unsigned char)180;
unsigned long long int var_19 = 15233163914959511250ULL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
