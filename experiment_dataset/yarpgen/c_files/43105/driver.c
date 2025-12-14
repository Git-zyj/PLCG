#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)97;
short var_3 = (short)22073;
long long int var_5 = -5589718351609918043LL;
unsigned short var_9 = (unsigned short)40760;
unsigned long long int var_12 = 5398859404223098085ULL;
signed char var_14 = (signed char)-81;
int zero = 0;
short var_17 = (short)-18823;
int var_18 = -1345644715;
signed char var_19 = (signed char)-49;
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
