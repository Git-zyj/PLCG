#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22321;
unsigned long long int var_1 = 14770906043614483512ULL;
long long int var_4 = -1809179508211744220LL;
unsigned short var_7 = (unsigned short)3265;
long long int var_9 = -1751151971063553297LL;
unsigned long long int var_10 = 9464585828427113077ULL;
signed char var_11 = (signed char)-65;
signed char var_17 = (signed char)-126;
int zero = 0;
short var_18 = (short)-32357;
signed char var_19 = (signed char)-9;
signed char var_20 = (signed char)102;
unsigned long long int var_21 = 3094817620283963724ULL;
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
