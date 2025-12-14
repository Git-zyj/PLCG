#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)65397;
short var_4 = (short)-22876;
long long int var_6 = 714257115859989952LL;
short var_9 = (short)25610;
unsigned long long int var_11 = 15083733520607733134ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)118;
long long int var_13 = 6853976594000642214LL;
long long int var_14 = 2798982677783374287LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
