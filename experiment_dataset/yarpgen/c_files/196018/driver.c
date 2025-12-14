#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-85;
unsigned short var_1 = (unsigned short)60394;
long long int var_2 = 5942299489458972755LL;
unsigned long long int var_4 = 3177486259062825103ULL;
unsigned int var_6 = 3571005634U;
unsigned int var_8 = 3838312871U;
unsigned char var_11 = (unsigned char)99;
int var_13 = 1121317628;
unsigned short var_14 = (unsigned short)64442;
unsigned long long int var_16 = 2595816021467010734ULL;
int zero = 0;
unsigned int var_17 = 4236509689U;
signed char var_18 = (signed char)-34;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
