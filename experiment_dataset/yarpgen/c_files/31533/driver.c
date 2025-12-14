#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36934;
unsigned short var_2 = (unsigned short)56964;
int var_4 = 381701418;
unsigned long long int var_5 = 14388150011194201041ULL;
signed char var_6 = (signed char)71;
signed char var_8 = (signed char)-27;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 1142111831606042100ULL;
unsigned long long int var_12 = 10694939277323756108ULL;
unsigned char var_15 = (unsigned char)23;
int zero = 0;
signed char var_17 = (signed char)-3;
signed char var_18 = (signed char)-1;
unsigned short var_19 = (unsigned short)11609;
unsigned long long int var_20 = 13656839970507673875ULL;
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
