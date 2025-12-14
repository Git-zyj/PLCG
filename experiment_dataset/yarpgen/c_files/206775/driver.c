#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11047515001147996055ULL;
_Bool var_2 = (_Bool)1;
long long int var_3 = 6924555926579370558LL;
unsigned char var_5 = (unsigned char)19;
unsigned short var_7 = (unsigned short)42366;
unsigned short var_8 = (unsigned short)5087;
unsigned char var_11 = (unsigned char)105;
unsigned int var_12 = 1502261220U;
signed char var_17 = (signed char)-45;
int zero = 0;
short var_18 = (short)20673;
unsigned short var_19 = (unsigned short)6282;
unsigned char var_20 = (unsigned char)90;
short var_21 = (short)8888;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
