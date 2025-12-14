#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)24;
signed char var_2 = (signed char)-31;
short var_3 = (short)-21816;
unsigned long long int var_6 = 13592801935403207144ULL;
unsigned long long int var_8 = 13251961381002706903ULL;
signed char var_9 = (signed char)81;
unsigned short var_10 = (unsigned short)40844;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_16 = (signed char)-85;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)225;
unsigned long long int var_19 = 2971050877318398263ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
