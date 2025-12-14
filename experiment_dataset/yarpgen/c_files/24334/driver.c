#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 3997019264464367222ULL;
unsigned short var_2 = (unsigned short)6852;
unsigned char var_4 = (unsigned char)114;
int var_5 = 1413915950;
int var_6 = -1939364638;
unsigned long long int var_7 = 15544933029294242030ULL;
int var_10 = -454228468;
int zero = 0;
int var_11 = 2002161934;
unsigned short var_12 = (unsigned short)64779;
signed char var_13 = (signed char)-5;
void init() {
}

void checksum() {
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
