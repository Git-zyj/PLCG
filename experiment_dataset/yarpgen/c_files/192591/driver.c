#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -297676728;
signed char var_1 = (signed char)79;
int var_2 = 590918300;
signed char var_3 = (signed char)-26;
unsigned int var_4 = 1801810920U;
signed char var_5 = (signed char)-8;
unsigned char var_6 = (unsigned char)121;
unsigned int var_7 = 636293752U;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-14;
long long int var_10 = 2375663036669818596LL;
int zero = 0;
long long int var_11 = -8389840788090313470LL;
unsigned char var_12 = (unsigned char)95;
int var_13 = -1670093791;
unsigned char var_14 = (unsigned char)196;
unsigned int var_15 = 505419705U;
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
