#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 445752031;
int var_5 = -1496046263;
unsigned short var_6 = (unsigned short)42331;
unsigned int var_7 = 1620739846U;
unsigned int var_8 = 4006326080U;
long long int var_10 = -2072785849005195048LL;
int var_12 = -1618452685;
int var_14 = 525345526;
unsigned long long int var_16 = 3186043889000532219ULL;
unsigned long long int var_17 = 7990529653194811844ULL;
int zero = 0;
unsigned int var_18 = 1111252363U;
unsigned char var_19 = (unsigned char)31;
unsigned short var_20 = (unsigned short)58857;
unsigned long long int var_21 = 11133244381703195226ULL;
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
