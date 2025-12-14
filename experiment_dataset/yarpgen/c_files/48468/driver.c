#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5078508202498549149LL;
long long int var_4 = 5894478479333547109LL;
short var_5 = (short)-24964;
signed char var_9 = (signed char)-99;
short var_11 = (short)-26701;
short var_12 = (short)19267;
unsigned char var_13 = (unsigned char)4;
int zero = 0;
unsigned short var_17 = (unsigned short)11474;
unsigned long long int var_18 = 15594774809873394194ULL;
unsigned short var_19 = (unsigned short)37254;
unsigned char var_20 = (unsigned char)234;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
