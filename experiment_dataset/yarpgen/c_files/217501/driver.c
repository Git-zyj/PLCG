#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)21;
long long int var_2 = 5090032974744539447LL;
unsigned char var_3 = (unsigned char)67;
signed char var_6 = (signed char)-49;
unsigned short var_13 = (unsigned short)30957;
unsigned long long int var_15 = 7008516185767858819ULL;
short var_16 = (short)-28275;
int zero = 0;
unsigned short var_18 = (unsigned short)49097;
signed char var_19 = (signed char)-33;
unsigned short var_20 = (unsigned short)39995;
signed char var_21 = (signed char)6;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
