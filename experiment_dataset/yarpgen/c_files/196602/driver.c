#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4158575402U;
unsigned long long int var_2 = 3724529293761439283ULL;
short var_3 = (short)22043;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
short var_9 = (short)31381;
int zero = 0;
long long int var_10 = 2053007726160907629LL;
unsigned int var_11 = 1550396462U;
unsigned char var_12 = (unsigned char)196;
unsigned long long int var_13 = 16306651797281324016ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
