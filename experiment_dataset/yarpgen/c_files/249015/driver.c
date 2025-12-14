#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)5915;
int var_2 = -1052259759;
unsigned long long int var_3 = 16751641838988142563ULL;
unsigned long long int var_6 = 6740669685850632769ULL;
unsigned int var_7 = 2354642473U;
unsigned char var_8 = (unsigned char)136;
short var_9 = (short)8742;
unsigned long long int var_10 = 10071132999874337219ULL;
short var_11 = (short)-8725;
int zero = 0;
short var_12 = (short)-2200;
unsigned int var_13 = 4180994814U;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
