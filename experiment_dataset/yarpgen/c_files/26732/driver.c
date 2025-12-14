#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31598;
unsigned long long int var_1 = 12957640043066048594ULL;
signed char var_2 = (signed char)-71;
int var_6 = 800504956;
long long int var_8 = 1939639515147715467LL;
_Bool var_9 = (_Bool)1;
long long int var_11 = 205775451796376830LL;
unsigned short var_12 = (unsigned short)18147;
int var_15 = -1020064951;
short var_16 = (short)-18229;
int zero = 0;
int var_17 = -975794894;
long long int var_18 = -822550933602470225LL;
short var_19 = (short)-27647;
void init() {
}

void checksum() {
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
