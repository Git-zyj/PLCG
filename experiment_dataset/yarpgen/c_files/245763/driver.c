#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58892;
unsigned short var_1 = (unsigned short)50096;
_Bool var_5 = (_Bool)1;
long long int var_6 = 1977371313417606143LL;
unsigned short var_7 = (unsigned short)11102;
short var_8 = (short)9695;
unsigned int var_9 = 2495537651U;
short var_10 = (short)-26463;
unsigned char var_11 = (unsigned char)155;
signed char var_13 = (signed char)-90;
int zero = 0;
unsigned char var_14 = (unsigned char)191;
unsigned char var_15 = (unsigned char)226;
void init() {
}

void checksum() {
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
