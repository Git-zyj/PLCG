#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)144;
signed char var_2 = (signed char)47;
unsigned short var_3 = (unsigned short)2738;
unsigned char var_4 = (unsigned char)138;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-111;
int zero = 0;
signed char var_18 = (signed char)-32;
unsigned long long int var_19 = 6419879935917660495ULL;
unsigned short var_20 = (unsigned short)59985;
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
