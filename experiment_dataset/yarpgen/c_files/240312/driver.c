#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 792650420181481922LL;
unsigned short var_3 = (unsigned short)50460;
signed char var_6 = (signed char)-4;
long long int var_7 = -5210514807062168476LL;
signed char var_8 = (signed char)-49;
short var_9 = (short)3763;
int var_11 = 1615555096;
unsigned short var_14 = (unsigned short)53593;
unsigned long long int var_16 = 14838975060566950618ULL;
long long int var_18 = -2634101895518324889LL;
int zero = 0;
signed char var_19 = (signed char)-93;
int var_20 = 331943210;
int var_21 = 1577255593;
short var_22 = (short)-17280;
unsigned short var_23 = (unsigned short)14947;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
