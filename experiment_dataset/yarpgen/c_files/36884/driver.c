#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 805666265;
int var_3 = 977177029;
long long int var_4 = 2577226802442428416LL;
signed char var_6 = (signed char)-46;
unsigned int var_9 = 2935395189U;
int var_11 = -1487613428;
int var_13 = 1744054023;
unsigned short var_16 = (unsigned short)25128;
int zero = 0;
int var_18 = -1291985624;
unsigned int var_19 = 2560825822U;
unsigned int var_20 = 3352293904U;
unsigned short var_21 = (unsigned short)8708;
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
