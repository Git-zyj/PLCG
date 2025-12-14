#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6820457315052866790LL;
unsigned char var_1 = (unsigned char)241;
short var_2 = (short)-8456;
unsigned int var_3 = 652695555U;
unsigned long long int var_4 = 1572655020493818296ULL;
signed char var_5 = (signed char)46;
long long int var_6 = 2777270826637828572LL;
unsigned char var_9 = (unsigned char)133;
unsigned long long int var_12 = 16112302501577765795ULL;
signed char var_13 = (signed char)-76;
unsigned short var_14 = (unsigned short)20975;
unsigned char var_15 = (unsigned char)227;
int zero = 0;
unsigned int var_17 = 1580208860U;
long long int var_18 = -3088011613224140640LL;
unsigned long long int var_19 = 8452003004953404694ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
