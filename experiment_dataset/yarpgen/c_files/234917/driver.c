#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-29512;
unsigned int var_3 = 4238568893U;
unsigned char var_4 = (unsigned char)105;
unsigned int var_8 = 1671109954U;
unsigned char var_9 = (unsigned char)202;
signed char var_10 = (signed char)-107;
short var_13 = (short)-2710;
int zero = 0;
long long int var_16 = -4569442260351924548LL;
long long int var_17 = 1228559460194178653LL;
unsigned long long int var_18 = 14839194790562200171ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
