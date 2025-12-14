#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)89;
int var_4 = -428007582;
unsigned int var_5 = 3002489637U;
int var_6 = -1274353429;
long long int var_11 = 3752687483347015070LL;
long long int var_13 = 2005812615463915033LL;
unsigned int var_15 = 1481378182U;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)26846;
signed char var_22 = (signed char)-98;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
