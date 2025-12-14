#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5050069269857082046ULL;
int var_3 = -1622934977;
unsigned char var_5 = (unsigned char)6;
unsigned int var_6 = 228040925U;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 9757898002490329832ULL;
unsigned long long int var_11 = 14943336337750262623ULL;
unsigned short var_12 = (unsigned short)51682;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 13781983066324771854ULL;
signed char var_16 = (signed char)-81;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
