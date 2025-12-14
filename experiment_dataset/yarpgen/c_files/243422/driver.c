#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13522;
short var_4 = (short)-23794;
signed char var_9 = (signed char)-33;
unsigned char var_10 = (unsigned char)227;
_Bool var_11 = (_Bool)0;
int var_14 = 951999433;
signed char var_15 = (signed char)-107;
int zero = 0;
unsigned long long int var_19 = 14204709647239461578ULL;
int var_20 = 166856061;
void init() {
}

void checksum() {
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
