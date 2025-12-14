#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10798;
unsigned int var_1 = 1533441576U;
unsigned char var_2 = (unsigned char)113;
short var_3 = (short)-13296;
unsigned short var_4 = (unsigned short)30464;
unsigned short var_6 = (unsigned short)22653;
short var_7 = (short)-30190;
unsigned long long int var_8 = 15194564704954999732ULL;
short var_9 = (short)18054;
unsigned short var_10 = (unsigned short)16987;
unsigned int var_13 = 2647040747U;
short var_14 = (short)-24325;
unsigned short var_15 = (unsigned short)14777;
int var_16 = -1558173203;
int zero = 0;
long long int var_17 = 6223751757651395331LL;
unsigned long long int var_18 = 47067271904770909ULL;
unsigned int var_19 = 3874563824U;
unsigned short var_20 = (unsigned short)60260;
long long int var_21 = 8514614420352966349LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
