#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19726;
unsigned short var_1 = (unsigned short)29139;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 9485166068394390934ULL;
unsigned short var_5 = (unsigned short)44402;
unsigned long long int var_6 = 3555081557127857055ULL;
unsigned short var_7 = (unsigned short)41863;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-20664;
short var_12 = (short)-4698;
short var_13 = (short)-3183;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
