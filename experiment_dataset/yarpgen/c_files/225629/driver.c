#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -623436167;
unsigned short var_3 = (unsigned short)50844;
unsigned char var_4 = (unsigned char)230;
unsigned long long int var_6 = 10034001445204523061ULL;
short var_7 = (short)-28832;
unsigned char var_10 = (unsigned char)177;
unsigned char var_12 = (unsigned char)42;
unsigned long long int var_13 = 6935176108564058462ULL;
unsigned char var_16 = (unsigned char)251;
short var_18 = (short)3331;
int zero = 0;
int var_19 = 1340744536;
int var_20 = -214559278;
unsigned long long int var_21 = 1805617863372225119ULL;
unsigned int var_22 = 3385397321U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
