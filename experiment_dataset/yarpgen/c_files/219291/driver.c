#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-11;
unsigned int var_5 = 839650158U;
unsigned short var_7 = (unsigned short)64053;
short var_9 = (short)-21981;
unsigned long long int var_13 = 14807572596801117146ULL;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)25807;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-14095;
int zero = 0;
unsigned long long int var_18 = 12978087217057625230ULL;
unsigned char var_19 = (unsigned char)13;
short var_20 = (short)-26787;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
