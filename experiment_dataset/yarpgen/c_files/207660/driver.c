#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)4;
short var_2 = (short)18746;
unsigned char var_3 = (unsigned char)36;
unsigned int var_4 = 2769207282U;
signed char var_7 = (signed char)-5;
signed char var_13 = (signed char)-3;
unsigned char var_15 = (unsigned char)5;
int zero = 0;
unsigned long long int var_17 = 13008664334963658432ULL;
unsigned short var_18 = (unsigned short)10761;
unsigned short var_19 = (unsigned short)32811;
unsigned long long int var_20 = 9986369936429791144ULL;
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
