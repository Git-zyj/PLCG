#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)14;
unsigned char var_4 = (unsigned char)198;
unsigned short var_5 = (unsigned short)31733;
long long int var_6 = -6191032135634786660LL;
unsigned long long int var_7 = 15698000285981595362ULL;
long long int var_8 = -7031295284050938722LL;
signed char var_9 = (signed char)83;
unsigned long long int var_10 = 10621152051229829493ULL;
unsigned short var_11 = (unsigned short)58838;
int var_12 = -2100577710;
int zero = 0;
short var_15 = (short)-20886;
unsigned int var_16 = 3364045721U;
long long int var_17 = 8833347559522610039LL;
long long int var_18 = -6912021876969668923LL;
signed char var_19 = (signed char)104;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
