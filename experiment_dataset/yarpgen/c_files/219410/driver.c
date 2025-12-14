#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)20767;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-9778;
unsigned char var_6 = (unsigned char)130;
unsigned char var_9 = (unsigned char)13;
unsigned long long int var_13 = 3052767554251929194ULL;
unsigned long long int var_15 = 7195496027221641591ULL;
signed char var_16 = (signed char)82;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)17440;
unsigned int var_20 = 4076636200U;
signed char var_21 = (signed char)-7;
void init() {
}

void checksum() {
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
