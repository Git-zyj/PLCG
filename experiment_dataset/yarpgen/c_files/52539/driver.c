#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26703;
unsigned int var_1 = 4236402267U;
unsigned int var_2 = 1571476828U;
signed char var_3 = (signed char)-113;
signed char var_4 = (signed char)-41;
unsigned int var_5 = 1470266094U;
unsigned int var_6 = 3613866684U;
unsigned short var_7 = (unsigned short)53420;
signed char var_8 = (signed char)101;
unsigned int var_9 = 1734846370U;
signed char var_10 = (signed char)-82;
int zero = 0;
unsigned char var_11 = (unsigned char)91;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2283970862U;
unsigned short var_14 = (unsigned short)64191;
int var_15 = -1194233291;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
