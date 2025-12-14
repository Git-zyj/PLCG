#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)98;
unsigned short var_2 = (unsigned short)3163;
unsigned short var_6 = (unsigned short)20547;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)81;
unsigned short var_14 = (unsigned short)15797;
int zero = 0;
unsigned short var_18 = (unsigned short)8845;
short var_19 = (short)-9542;
unsigned char var_20 = (unsigned char)64;
unsigned char var_21 = (unsigned char)155;
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
