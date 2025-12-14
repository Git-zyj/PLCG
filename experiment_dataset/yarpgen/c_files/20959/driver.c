#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -181001546;
long long int var_1 = -1169683727735561971LL;
signed char var_2 = (signed char)-24;
unsigned int var_3 = 2394540736U;
short var_4 = (short)14939;
signed char var_5 = (signed char)-37;
signed char var_8 = (signed char)36;
signed char var_10 = (signed char)-6;
int zero = 0;
short var_12 = (short)-25944;
unsigned char var_13 = (unsigned char)86;
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
