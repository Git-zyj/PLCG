#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14688814390704244138ULL;
unsigned long long int var_4 = 13075383320990345140ULL;
unsigned char var_8 = (unsigned char)81;
int var_9 = -958865741;
unsigned long long int var_14 = 15630224296905596266ULL;
short var_15 = (short)29312;
int zero = 0;
long long int var_16 = 6245410985522342482LL;
unsigned long long int var_17 = 7022668298420982322ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
