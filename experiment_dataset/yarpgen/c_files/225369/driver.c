#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-94;
unsigned char var_2 = (unsigned char)40;
unsigned int var_3 = 1347525997U;
unsigned short var_4 = (unsigned short)18407;
unsigned short var_5 = (unsigned short)18975;
unsigned short var_6 = (unsigned short)48699;
long long int var_7 = 4324769680699993741LL;
short var_9 = (short)14074;
int zero = 0;
unsigned int var_10 = 1418562315U;
unsigned int var_11 = 4156438498U;
unsigned int var_12 = 4247986170U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
